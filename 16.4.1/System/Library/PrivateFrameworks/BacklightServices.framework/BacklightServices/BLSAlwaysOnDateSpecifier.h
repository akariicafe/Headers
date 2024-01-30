@class NSString, NSDate;

@interface BLSAlwaysOnDateSpecifier : NSObject <NSCopying, NSSecureCoding, BSXPCCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long fidelity;
@property (readonly, nonatomic) id userObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)newSpecifierWithMaxFidelity:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0 fidelity:(long long)a1;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)bls_loggingString;
- (long long)compare:(id)a0;
- (id)bls_shortLoggingString;
- (id)initWithDate:(id)a0 fidelity:(long long)a1 userObject:(id)a2;
- (void).cxx_destruct;

@end

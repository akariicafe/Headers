@class NSString, BLSAlwaysOnDateSpecifier;

@interface BLSDiagnosticEnvironmentDateSpecifier : NSObject <BLSEnvironmentDateSpecifying, NSSecureCoding, BSXPCCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BLSAlwaysOnDateSpecifier *dateSpecifier;
@property (readonly, copy, nonatomic) NSString *environmentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithSpecifier:(id)a0;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (void).cxx_destruct;
- (id)initWithDateSpecifier:(id)a0 environmentIdentifier:(id)a1;

@end

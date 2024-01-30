@class NSString, NSDate;

@interface HKSemanticDate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, copy, nonatomic) NSDate *date;

+ (id)semanticDateWithKeyPath:(id)a0 date:(id)a1;

- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyPath:(id)a0 date:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end

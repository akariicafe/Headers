@class NSString;

@interface _DASFileProtection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *fileProtection;

+ (id)none;
+ (id)complete;
+ (id)completeUntilFirstUserAuthentication;
+ (id)completeUnlessOpen;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)indicatesProtection;
- (id)initWithProtection:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

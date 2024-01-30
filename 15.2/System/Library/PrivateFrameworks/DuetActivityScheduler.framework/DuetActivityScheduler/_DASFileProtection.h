@class NSString;

@interface _DASFileProtection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *fileProtection;

+ (id)completeUnlessOpen;
+ (id)completeUntilFirstUserAuthentication;
+ (id)complete;
+ (id)none;

- (void)encodeWithCoder:(id)a0;
- (BOOL)indicatesProtection;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProtection:(id)a0;

@end

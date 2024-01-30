@class NSString;

@interface _DASFileProtection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *fileProtection;

+ (id)complete;
+ (id)completeUnlessOpen;
+ (id)none;
+ (id)completeUntilFirstUserAuthentication;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithProtection:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)indicatesProtection;

@end

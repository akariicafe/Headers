@class NSString;

@interface IXPlaceholderSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) unsigned long long installType;
@property (nonatomic) BOOL isPlugin;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (Class)clientPromiseClass;

@end

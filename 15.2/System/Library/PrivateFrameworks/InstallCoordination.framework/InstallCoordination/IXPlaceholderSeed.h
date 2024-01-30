@class NSString;

@interface IXPlaceholderSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) unsigned long long installType;
@property (nonatomic) BOOL isPlugin;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)clientPromiseClass;

@end

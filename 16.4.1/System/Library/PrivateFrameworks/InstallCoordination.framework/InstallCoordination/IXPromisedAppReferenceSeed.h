@class IXApplicationIdentity;

@interface IXPromisedAppReferenceSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long installationDomain;
@property (retain, nonatomic) IXApplicationIdentity *identity;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (Class)clientPromiseClass;

@end

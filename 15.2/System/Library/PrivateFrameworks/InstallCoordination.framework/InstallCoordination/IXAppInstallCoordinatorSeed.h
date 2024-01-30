@class NSString, NSUUID;

@interface IXAppInstallCoordinatorSeed : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSUUID *uniqueIdentifier;
@property (nonatomic) unsigned long long creator;
@property (nonatomic) unsigned int creatorEUID;
@property (nonatomic) unsigned long long intent;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

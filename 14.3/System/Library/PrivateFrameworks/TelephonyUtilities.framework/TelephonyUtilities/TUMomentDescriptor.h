@class NSURL, NSString;

@interface TUMomentDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *photoViewingAppURL;
@property (readonly, copy, nonatomic) NSString *photosAssetIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithPhotosAppAssetIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

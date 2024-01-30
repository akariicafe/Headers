@class NSSet, NSURL, NSArray;

@interface CFXMediaItemAdjustmentsData : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSSet *secureCodingClassWhitelist;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long cameraMode;
@property (readonly, nonatomic) NSURL *metadataURL;
@property (readonly, nonatomic) long long cameraPosition;
@property (readonly, nonatomic) NSArray *effectStack;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCameraMode:(long long)a0 metadataURL:(id)a1 cameraPosition:(long long)a2 effectStack:(id)a3;

@end

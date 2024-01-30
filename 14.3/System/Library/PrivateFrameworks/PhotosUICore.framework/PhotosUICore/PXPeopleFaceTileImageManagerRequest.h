@class PHFace, PHAsset, PHPerson;

@interface PXPeopleFaceTileImageManagerRequest : NSObject

@property (retain, nonatomic) PHFace *face;
@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) PHAsset *asset;
@property (nonatomic) long long deliveryMode;
@property (nonatomic) BOOL synchronous;

- (void).cxx_destruct;
- (id)initWithPerson:(id)a0 face:(id)a1 asset:(id)a2;
- (id)initWithPerson:(id)a0;
- (id)description;
- (id)initWithFaceTile:(id)a0;

@end

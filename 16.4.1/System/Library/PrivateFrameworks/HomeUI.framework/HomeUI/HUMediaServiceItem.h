@class HMHome, MediaService;

@interface HUMediaServiceItem : HFItem <NSCopying>

@property (retain, nonatomic) MediaService *mediaService;
@property (readonly, nonatomic) HMHome *home;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithMediaService:(id)a0 home:(id)a1;

@end

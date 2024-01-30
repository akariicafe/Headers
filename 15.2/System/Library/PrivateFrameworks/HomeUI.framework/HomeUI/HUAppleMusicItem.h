@protocol HFMediaProfileContainer;

@interface HUAppleMusicItem : HFItem

@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithMediaProfileContainer:(id)a0;

@end

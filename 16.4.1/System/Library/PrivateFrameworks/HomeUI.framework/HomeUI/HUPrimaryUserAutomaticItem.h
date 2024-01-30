@protocol HFMediaProfileContainer;

@interface HUPrimaryUserAutomaticItem : HFItem

@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithMediaProfileContainer:(id)a0;

@end

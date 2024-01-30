@protocol HFMediaProfileContainer;

@interface HUPrimaryUserItem : HFUserItem

@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithHome:(id)a0 mediaProfileContainer:(id)a1 user:(id)a2;

@end

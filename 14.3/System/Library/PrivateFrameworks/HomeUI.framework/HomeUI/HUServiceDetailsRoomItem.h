@class HFItemBuilder;
@protocol HFServiceLikeBuilder;

@interface HUServiceDetailsRoomItem : HUServiceDetailsAbstractItem

@property (readonly, nonatomic) HFItemBuilder<HFServiceLikeBuilder> *serviceLikeBuilder;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithSourceServiceItem:(id)a0 home:(id)a1 serviceLikeBuilder:(id)a2;

@end

@class HFItem;

@interface HUItemTableViewScrollDestination : NSObject

@property (readonly, nonatomic) HFItem *item;
@property (readonly, nonatomic, getter=isAnimated) BOOL animated;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0 animated:(BOOL)a1;

@end

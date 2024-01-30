@class HFItem, NSString, HULinkedApplicationView, UIView;
@protocol HUResizableCellDelegate;

@interface HULinkedApplicationCollectionViewCell : UICollectionViewCell <HUCellProtocol, HUCollectionViewCellSeparatorsProtocol>

@property (readonly, nonatomic) HULinkedApplicationView *linkedApplicationView;
@property (readonly, nonatomic) UIView *topSeparatorView;
@property (readonly, nonatomic) UIView *bottomSeparatorView;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL topSeparatorVisible;
@property (nonatomic) BOOL bottomSeparatorVisible;

@end

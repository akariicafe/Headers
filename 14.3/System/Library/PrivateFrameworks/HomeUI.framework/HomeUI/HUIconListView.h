@class NSArray, NSMutableArray;

@interface HUIconListView : UIView

@property (retain, nonatomic) NSMutableArray *iconViews;
@property (retain, nonatomic) NSArray *iconDescriptors;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setUpIcons;
- (void)_prepareIconArray;
- (void)_addIconWithDescriptor:(id)a0;
- (void)_layoutRightToLeft;
- (void)_layoutLeftToRight;
- (void)_addIconNamed:(id)a0;

@end

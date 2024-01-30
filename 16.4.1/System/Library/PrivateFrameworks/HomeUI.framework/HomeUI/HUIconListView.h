@class NSArray, NSMutableArray;

@interface HUIconListView : UIView

@property (retain, nonatomic) NSMutableArray *iconViews;
@property (retain, nonatomic) NSArray *iconDescriptors;

- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)_addIconNamed:(id)a0;
- (void)_addIconWithDescriptor:(id)a0;
- (void)_layoutLeftToRight;
- (void)_layoutRightToLeft;
- (void)_prepareIconArray;
- (void)_setUpIcons;

@end

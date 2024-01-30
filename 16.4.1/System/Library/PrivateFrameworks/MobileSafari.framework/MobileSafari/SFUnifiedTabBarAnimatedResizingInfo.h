@class NSSet;

@interface SFUnifiedTabBarAnimatedResizingInfo : NSObject

@property (readonly, nonatomic) NSSet *itemsToKeepVisible;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } targetContentOffset;

- (void).cxx_destruct;
- (id)initWithItemsToKeepVisible:(id)a0 targetContentOffset:(struct CGPoint { double x0; double x1; })a1;

@end

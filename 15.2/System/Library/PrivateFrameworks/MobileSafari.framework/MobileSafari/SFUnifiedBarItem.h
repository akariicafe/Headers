@class SFUnifiedBarItemView;

@interface SFUnifiedBarItem : NSObject

@property (retain, nonatomic) SFUnifiedBarItemView *reusableView;
@property (nonatomic) long long activeAnimationCount;
@property (readonly, nonatomic) SFUnifiedBarItemView *view;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic, getter=isDragging) BOOL dragging;
@property (readonly, nonatomic, getter=isDropping) BOOL dropping;
@property (readonly, nonatomic) SFUnifiedBarItem *secondaryItem;
@property (nonatomic) unsigned long long spacingOptions;

- (void).cxx_destruct;

@end

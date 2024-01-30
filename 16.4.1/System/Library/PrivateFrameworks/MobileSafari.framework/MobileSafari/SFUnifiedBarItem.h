@class SFUnifiedBarItemView, NSString;

@interface SFUnifiedBarItem : NSObject

@property (nonatomic) long long activeAnimationCount;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (readonly, nonatomic, getter=isDragging) BOOL dragging;
@property (readonly, nonatomic, getter=isDropping) BOOL dropping;
@property (nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) SFUnifiedBarItem *secondaryItem;
@property (nonatomic) unsigned long long spacingOptions;
@property (readonly, nonatomic) SFUnifiedBarItemView *view;
@property (retain, nonatomic) SFUnifiedBarItemView *reusableView;
@property (retain, nonatomic) SFUnifiedBarItemView *reusablePreviewView;
@property (copy, nonatomic) NSString *viewReuseIdentifier;

- (void).cxx_destruct;
- (id)menuElementRepresentationWithSelectionHandler:(id /* block */)a0;
- (void)configureItemView:(id)a0 isPreview:(BOOL)a1;

@end

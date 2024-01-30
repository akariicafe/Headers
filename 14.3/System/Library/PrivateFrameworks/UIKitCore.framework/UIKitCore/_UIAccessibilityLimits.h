@class NSString, NSHashTable;

@interface _UIAccessibilityLimits : NSObject {
    NSHashTable *_associatedViews;
}

@property (copy, nonatomic) NSString *minimumContentSizeCategory;
@property (copy, nonatomic) NSString *maximumContentSizeCategory;

- (void)_notifyAllAssociatedViews;
- (void).cxx_destruct;
- (id)_limitedTraitCollection:(id)a0;
- (void)_associateView:(id)a0;
- (void)_dissociateView:(id)a0;

@end

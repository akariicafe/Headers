@class NSArray, NSOrderedCollectionDifference;

@interface ATXHomeScreenConfigurationComponentsDiffer : NSObject {
    NSOrderedCollectionDifference *_pinnedWidgetsDifference;
    NSOrderedCollectionDifference *_stackedWidgetsDifference;
    NSOrderedCollectionDifference *_stacksDifference;
}

@property (readonly, nonatomic) NSArray *addedPinnedWidgets;
@property (readonly, nonatomic) NSArray *deletedPinnedWidgets;
@property (readonly, nonatomic) NSArray *addedStackedWidgets;
@property (readonly, nonatomic) NSArray *deletedStackedWidgets;
@property (readonly, nonatomic) NSArray *addedStacks;
@property (readonly, nonatomic) NSArray *deletedStacks;

- (void).cxx_destruct;
- (id)initWithPreviousComponents:(id)a0 currentComponents:(id)a1;

@end

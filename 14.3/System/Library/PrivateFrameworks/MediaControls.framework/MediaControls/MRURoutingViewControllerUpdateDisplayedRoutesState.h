@class NSNumber, MPSectionedCollection;

@interface MRURoutingViewControllerUpdateDisplayedRoutesState : NSObject

@property (copy, nonatomic) NSNumber *version;
@property (copy, nonatomic) MPSectionedCollection *oldItems;
@property (copy, nonatomic) MPSectionedCollection *updatedItems;
@property (copy, nonatomic) id /* block */ isEqualBlock;
@property (copy, nonatomic) id /* block */ isUpdatedBlock;

- (void).cxx_destruct;

@end

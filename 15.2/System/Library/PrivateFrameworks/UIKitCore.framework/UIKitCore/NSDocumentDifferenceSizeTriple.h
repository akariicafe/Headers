@class NSDocumentDifferenceSize;

@interface NSDocumentDifferenceSizeTriple : NSObject

@property (readonly, nonatomic) NSDocumentDifferenceSize *dueToRecentChangesBeforeSaving;
@property (readonly, nonatomic) NSDocumentDifferenceSize *betweenPreservingPreviousVersionAndSaving;
@property (readonly, nonatomic) NSDocumentDifferenceSize *betweenPreviousSavingAndSaving;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end

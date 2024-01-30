@class NSDocumentDifferenceSize;

@interface NSDocumentDifferenceSizeTriple : NSObject

@property (readonly, nonatomic) NSDocumentDifferenceSize *dueToRecentChangesBeforeSaving;
@property (readonly, nonatomic) NSDocumentDifferenceSize *betweenPreservingPreviousVersionAndSaving;
@property (readonly, nonatomic) NSDocumentDifferenceSize *betweenPreviousSavingAndSaving;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end

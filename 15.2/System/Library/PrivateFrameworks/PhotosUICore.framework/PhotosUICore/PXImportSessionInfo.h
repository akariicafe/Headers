@class NSArray, NSMutableArray, NSDate;

@interface PXImportSessionInfo : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSArray *itemsToImport;
@property (nonatomic) BOOL importComplete;
@property (nonatomic) BOOL importStopped;
@property (retain, nonatomic) NSMutableArray *importedItems;
@property (retain, nonatomic) NSMutableArray *errorItems;
@property (nonatomic) long long completedItemsCount;

- (void).cxx_destruct;

@end

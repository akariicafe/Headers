@class NSString, NSDate, DiagnosticCaseStorage, NSMutableArray;

@interface UploadRecord : NSManagedObject

@property (nonatomic) short environment;
@property (copy, nonatomic) NSDate *finishTime;
@property (nonatomic) short numberOfFiles;
@property (copy, nonatomic) NSString *operationID;
@property (nonatomic) float progress;
@property (nonatomic) short uploadState;
@property (copy, nonatomic) NSDate *startTime;
@property (nonatomic) long long totalBytes;
@property (nonatomic) short preflightResult;
@property (nonatomic) short priority;
@property (nonatomic) BOOL allowsCellular;
@property (retain, nonatomic) DiagnosticCaseStorage *caseStorage;
@property (retain, nonatomic) NSMutableArray *fileURLs;

+ (id)fetchRequest;

- (void).cxx_destruct;

@end

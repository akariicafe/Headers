@class NSString, NSUUID, NSData, NSDate;

@interface DRSEnableDataGatheringQueryMO : NSManagedObject

@property (nonatomic) short attemptCount;
@property (copy, nonatomic) NSString *build;
@property (retain, nonatomic) NSData *contextDictionaryData;
@property (nonatomic) BOOL isContinue;
@property (copy, nonatomic) NSString *issueCategory;
@property (copy, nonatomic) NSString *logType;
@property (copy, nonatomic) NSDate *queryDate;
@property (copy, nonatomic) NSUUID *queryID;
@property (copy, nonatomic) NSString *rejectionReason;
@property (nonatomic) short response;
@property (copy, nonatomic) NSString *teamID;

+ (id)fetchRequest;

@end

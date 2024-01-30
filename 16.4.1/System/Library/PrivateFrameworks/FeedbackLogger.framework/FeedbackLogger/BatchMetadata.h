@class NSString, NSNumber, NSDate;

@interface BatchMetadata : NSObject

@property (copy, nonatomic) NSString *batchIdentifier;
@property (copy, nonatomic) NSString *timestampReferenceIdentifier;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) int batchStatus;
@property (nonatomic) unsigned long long processedAttempts;
@property (copy, nonatomic) NSDate *dateCreated;
@property (copy, nonatomic) NSDate *dateLastProcessed;
@property (copy, nonatomic) NSDate *dateUploaded;
@property (nonatomic) unsigned long long eventCount;
@property (retain, nonatomic) NSNumber *category;

- (void).cxx_destruct;

@end

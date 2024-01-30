@class NSString, NSData, NSDate;

@interface WFCoreDataCloudKitSyncToken : NSManagedObject <WFRecordStorage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *account;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *lastOrderingCloudKitRecordMetadata;
@property (retain, nonatomic) NSData *lastOrderingData;
@property (retain, nonatomic) NSData *serverChangeTokenData;
@property (retain, nonatomic) NSData *syncEngineMetadata;
@property (retain, nonatomic) NSData *syncFlagsCloudKitRecordMetadata;

+ (id)fetchRequest;

- (id)descriptor;

@end

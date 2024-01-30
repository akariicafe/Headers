@class NSString, NSDate;

@interface MSServiceRequestLapseEvent : NSObject

@property (retain, nonatomic) NSString *serviceID;
@property (retain, nonatomic) NSDate *recordCreationDate;
@property (nonatomic) unsigned long long timeOfRequest;
@property (retain, nonatomic) NSDate *dateOfRequest;
@property (nonatomic) unsigned long long endTime;

- (void).cxx_destruct;
- (double)durationBetweenRequestAndReadyToUse;
- (double)durationBetweenRequestAndRecordCreation;
- (id)initWithServiceID:(id)a0;

@end

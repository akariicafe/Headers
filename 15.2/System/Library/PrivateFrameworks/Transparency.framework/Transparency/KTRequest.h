@class NSString, NSUUID, NSData, NSDate, NSSet, DownloadRecord;

@interface KTRequest : NSManagedObject

@property (retain, nonatomic) NSData *accountId;
@property (retain, nonatomic) NSData *accountKey;
@property (copy, nonatomic) NSString *application;
@property (retain, nonatomic) NSData *clientLoggableDatas;
@property (copy, nonatomic) NSDate *earliestAddedDate;
@property (retain, nonatomic) NSData *queryRequest;
@property (retain, nonatomic) NSData *queryResponse;
@property (copy, nonatomic) NSUUID *requestId;
@property (nonatomic) double requestTime;
@property (nonatomic) long long responseErrorCode;
@property (copy, nonatomic) NSDate *responseTime;
@property (nonatomic) long long sequenceId;
@property (copy, nonatomic) NSString *serverHint;
@property (retain, nonatomic) NSData *serverLoggableDatas;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *uri;
@property (nonatomic) long long verificationResult;
@property (retain, nonatomic) NSSet *failures;
@property (retain, nonatomic) NSSet *fetchRecord;
@property (retain, nonatomic) DownloadRecord *requestDownloadRecord;
@property (retain, nonatomic) NSSet *requestIDCache;
@property (retain, nonatomic) DownloadRecord *smtDownloadRecord;
@property (retain, nonatomic) NSSet *smts;

+ (id)fetchRequest;

@end

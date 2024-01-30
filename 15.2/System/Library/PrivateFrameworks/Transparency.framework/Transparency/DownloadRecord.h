@class KTRequest, NSString, NSUUID, NSData;

@interface DownloadRecord : NSManagedObject

@property (copy, nonatomic) NSString *application;
@property (copy, nonatomic) NSUUID *downloadId;
@property (nonatomic) long long downloadType;
@property (retain, nonatomic) NSData *requestData;
@property (nonatomic) double requestTime;
@property (retain, nonatomic) NSData *response;
@property (retain, nonatomic) NSData *revisions;
@property (copy, nonatomic) NSString *serverHint;
@property (nonatomic) long long startSLHRevision;
@property (retain, nonatomic) KTRequest *ktRequest;
@property (retain, nonatomic) KTRequest *smtRequest;

+ (id)fetchRequest;

- (BOOL)expired;

@end

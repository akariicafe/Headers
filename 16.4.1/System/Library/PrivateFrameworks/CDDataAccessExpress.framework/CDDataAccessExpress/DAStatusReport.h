@class NSString, NSNumber, NSDate;

@interface DAStatusReport : NSObject

@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) int numHBIDataPoints;
@property (retain, nonatomic) NSDate *lastSuccessDate;
@property (retain, nonatomic) NSDate *lastFailureDate;
@property (retain, nonatomic) NSString *persistentUUID;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *accountType;
@property (retain, nonatomic) NSNumber *timeSpan;
@property (retain, nonatomic) NSNumber *timeInNetworking;
@property (retain, nonatomic) NSNumber *averageHBI;
@property (retain, nonatomic) NSNumber *successfulRequests;
@property (retain, nonatomic) NSNumber *failedNetworkRequests;
@property (retain, nonatomic) NSNumber *failedProtocolRequests;
@property (retain, nonatomic) NSNumber *downloadedElements;
@property (retain, nonatomic) NSNumber *uploadedElements;
@property (retain, nonatomic) NSNumber *falseMoreAvailableCount;
@property (retain, nonatomic) NSString *protocolVersion;
@property (nonatomic) BOOL syncingAllowed;
@property (retain, nonatomic) NSNumber *isDelegate;

- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)mergeStatusReport:(id)a0;
- (void)noteFailedNetworkRequest;
- (void)noteFailedProtocolRequest;
- (void)noteFalseMoreAvailableResponse;
- (void)noteNewHBIDataPoint:(int)a0;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)a0;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)a0 numUploadedElements:(int)a1;
- (void)noteTimeSpentInNetworking:(double)a0;

@end

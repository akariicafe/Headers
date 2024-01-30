@class NSData, NSDictionary, NSString;

@interface SSHTTPArchive : NSObject

@property (retain, nonatomic) NSData *backingJSONData;
@property (nonatomic) BOOL compressed;
@property (readonly, nonatomic) NSData *JSONData;
@property (readonly, nonatomic) NSDictionary *JSONObject;
@property (readonly, nonatomic) NSString *JSONString;

+ (id)merge:(id)a0;
+ (void)sendWriteAllLogsToDiskDecompressedNotification;
+ (id)_JSONObjectForEntries:(id)a0;
+ (id)_contentDictionaryForResponse:(id)a0 responseData:(id)a1;
+ (id)_JSONObjectForTaskMetrics:(id)a0 requestData:(id)a1 responseData:(id)a2;
+ (id)_generateCommentsForTaskMetrics:(id)a0;
+ (void)removeLogsWithLogConfig:(id)a0 olderThanDate:(id)a1;
+ (id)_localIPAddress;
+ (id)_stringFromDate:(id)a0;
+ (id)_headersArrayForHTTPHeaders:(id)a0;
+ (id)_entryDictionaryForTaskMetrics:(id)a0 requestData:(id)a1 responseData:(id)a2;
+ (void)sendWriteAllLogsToDiskNotification;
+ (id)_dateFormatterForTimeZone:(id)a0;
+ (id)merge:(id)a0 withEstimatedFileSizeLimit:(unsigned long long)a1;
+ (id)_requestDictionaryForTaskTransactionMetrics:(id)a0 requestData:(id)a1;
+ (double)_timeIntervalFromFilename:(id)a0;
+ (id)_creatorDictionary;
+ (id)_entriesArrayForTaskMetrics:(id)a0 requestData:(id)a1 responseData:(id)a2;
+ (id)_responseDictionaryForTaskMetrics:(id)a0 responseData:(id)a1;
+ (id)outputDirectoryForLogConfig:(id)a0;

- (BOOL)writeToDiskError:(id *)a0;
- (id)initWithTaskMetrics:(id)a0 requestData:(id)a1 responseData:(id)a2;
- (id)description;
- (id)initWithJSONObject:(id)a0;
- (BOOL)writeToDiskWithLogConfig:(id)a0 compressed:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;

@end

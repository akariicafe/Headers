@class NSString, NSData;

@interface AMSHTTPArchive : NSObject

@property (class, readonly, nonatomic) NSString *directory;

@property (retain, nonatomic) NSData *backingJSONData;
@property (nonatomic, getter=isCompressed) BOOL compressed;
@property (readonly, nonatomic) NSData *JSONData;
@property (retain, nonatomic) NSString *urlString;

+ (id)merge:(id)a0;
+ (id)_generateResponseDictionaryForMetrics:(id)a0 responseData:(id)a1;
+ (double)_timeIntervalFromFilename:(id)a0;
+ (void)removeHTTPArchiveFilesOlderThanDate:(id)a0;
+ (id)_generateHeadersArrayForHTTPHeaders:(id)a0;
+ (id)_generateCommentsStringForMetrics:(id)a0;
+ (id)_dateFormatterForTimeZone:(id)a0;
+ (id)_generateContentDictionaryForResponse:(id)a0 responseData:(id)a1;
+ (id)_createJSONObjectForTaskMetrics:(id)a0 requestData:(id)a1 responseData:(id)a2;
+ (id)merge:(id)a0 withEstimatedFileSizeLimit:(unsigned long long)a1;
+ (id)_generateRequestDictionaryForMetrics:(id)a0 requestData:(id)a1;
+ (id)_createJSONObjectForEntries:(id)a0;

- (void)logHARData;
- (void).cxx_destruct;
- (BOOL)writeToDiskWithError:(id *)a0 compressed:(BOOL)a1;
- (id)initWithURLTaskInfo:(id)a0;
- (id)initWithMetrics:(id)a0 requestData:(id)a1 responseData:(id)a2;
- (id)initWithJSONObject:(id)a0;

@end

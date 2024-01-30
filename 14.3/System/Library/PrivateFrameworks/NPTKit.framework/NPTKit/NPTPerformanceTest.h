@class NPTResults, NSString, NPTUpload, NSMutableDictionary, NSDictionary, NPTPerformanceTestConfiguration, NSObject, NPTPing, NPTDownload;
@protocol OS_nw_activity;

@interface NPTPerformanceTest : NSObject <NPTPingDelegate, NPTDownloadDelegate, NPTUploadDelegate, NSSecureCoding, NSCopying> {
    NPTDownload *download;
    NPTUpload *upload;
    NPTPing *ping;
    NSMutableDictionary *restoredMetadata;
    NSString *uuid;
    NSObject<OS_nw_activity> *performanceTestActivity;
    NSMutableDictionary *snapshots;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NPTResults *results;
@property (nonatomic) BOOL inTimedMode;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) NPTPerformanceTestConfiguration *configuration;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSDictionary *_additionalMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)performanceTestWithConfiguration:(id)a0;
+ (id)performanceTestWithDefaultConfiguration;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)save;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)startDownloadWithCompletion:(id /* block */)a0;
- (void)cancelAllNetworking;
- (void)uploadWillStart;
- (void)upload:(id)a0 didFinishWithError:(id)a1;
- (void)upload:(id)a0 didReceiveSpeedMetric:(id)a1;
- (void)upload:(id)a0 didFinishWithResults:(id)a1;
- (void)startUploadWithCompletion:(id /* block */)a0;
- (void)startPingWithCompletion:(id /* block */)a0;
- (id)getFlattenedDictionary;
- (id)timestampMasked;
- (id)convertDateToISO8601String:(id)a0;
- (id)timestampMaskedString;
- (void)getCDNDebugInfoWithTimeoutDuration:(double)a0 withCompletion:(id /* block */)a1;
- (void)pingWillStartPinging;
- (void)pingDidFinishWithResults:(id)a0;
- (void)pingDidFinishWithError:(id)a0;
- (void)downloadWillStart;
- (void)download:(id)a0 didReceiveSpeedMetric:(id)a1;
- (void)download:(id)a0 didFinishWithResults:(id)a1;
- (void)download:(id)a0 didFinishWithError:(id)a1;
- (void)startTestWithCompletion:(id /* block */)a0;

@end

@class NSArray, NSString, NSURL, NSDictionary, NSData, NSError;

@interface OSASubmitter : NSObject {
    long long _responseCode;
    NSData *_responseData;
    NSDictionary *_responseHeaders;
    NSError *_responseError;
    BOOL _dryRun;
    unsigned int _jobCount;
}

@property BOOL allowUnsignedBlobs;
@property (copy) NSArray *internalWhitelist;
@property (copy) NSString *connectionType;
@property (readonly) NSURL *submissionURL;
@property (copy) NSDictionary *launchInfo;

+ (id)extractAuthenticatedBlob:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (void)abort;
- (id)locateLog:(id)a0 forRouting:(id)a1 usingConfig:(id)a2 options:(id)a3 error:(id *)a4;
- (id)processJob:(id)a0 forRouting:(id)a1 including:(id)a2 usingConfig:(id)a3 taskings:(id)a4 summarize:(id)a5;
- (void)prefaceSubmission:(id)a0 withData:(id)a1 usingArchive:(id)a2 andHeaders:(id)a3;
- (void)postContent:(id)a0 withHeaders:(id)a1;
- (id)applyTasking:(id)a0 taskId:(id)a1 usingConfig:(id)a2 fromBlob:(id)a3;
- (id)processSubmissionJobs:(id)a0 usingConfig:(id)a1 summarize:(id)a2;
- (void)prepConfig:(id)a0;
- (BOOL)cheaterTaskingWithSets:(id)a0 usingConfig:(id)a1 resultsCallback:(id /* block */)a2;
- (BOOL)submitLogsUsingPolicy:(id)a0 resultsCallback:(id /* block */)a1;

@end

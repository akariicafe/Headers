@class NSString, NSDictionary, NSURL, NSData;

@interface CoreDAVMoveWithFallbackTaskGroup : CoreDAVTaskGroup

@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) NSURL *destinationURL;
@property (nonatomic) int overwrite;
@property (nonatomic) BOOL useFallback;
@property (retain, nonatomic) NSString *previousETag;
@property (retain, nonatomic) NSData *dataPayload;
@property (retain, nonatomic) NSString *dataContentType;
@property (readonly, nonatomic) NSDictionary *responseHeaders;
@property (readonly, nonatomic) NSString *nextETag;

- (id)description;
- (void)startTaskGroup;
- (void).cxx_destruct;
- (void)_completedMoveTask:(id)a0;
- (void)_completedPutTask:(id)a0;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1 AccountInfoProvider:(id)a2 taskManager:(id)a3;

@end

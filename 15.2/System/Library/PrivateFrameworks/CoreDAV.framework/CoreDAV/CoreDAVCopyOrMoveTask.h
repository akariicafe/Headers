@class NSURL;

@interface CoreDAVCopyOrMoveTask : CoreDAVTask {
    BOOL _shouldSendOrder;
}

@property (nonatomic) int overwrite;
@property (retain, nonatomic) NSURL *destinationURL;
@property (retain, nonatomic) NSURL *priorOrderedURL;

+ (id)stringFromOverwriteValue:(int)a0;

- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)requestBody;
- (id)additionalHeaderValues;
- (id)initWithURL:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1 andOverwrite:(int)a2;
- (void)_callBackToDelegateWithResponses:(id)a0 error:(id)a1;

@end

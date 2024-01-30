@class NSURL;

@interface CoreDAVCopyOrMoveTask : CoreDAVTask {
    BOOL _shouldSendOrder;
}

@property (nonatomic) int overwrite;
@property (retain, nonatomic) NSURL *destinationURL;
@property (retain, nonatomic) NSURL *priorOrderedURL;

+ (id)stringFromOverwriteValue:(int)a0;

- (void).cxx_destruct;
- (id)requestBody;
- (id)initWithURL:(id)a0;
- (id)description;
- (id)additionalHeaderValues;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1 andOverwrite:(int)a2;
- (void)_callBackToDelegateWithResponses:(id)a0 error:(id)a1;

@end

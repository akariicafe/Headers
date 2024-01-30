@class QLThumbnailGenerationRequest, QLThumbnailRepresentation, NSError, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface QLThumbnailRequestOperation : NSOperation {
    BOOL _finished;
    BOOL _executing;
    NSDate *_beginDate;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialResponseQueue;
@property (retain) QLThumbnailGenerationRequest *request;
@property (copy, nonatomic) id /* block */ thumbnailRequestGenerationWillStartBlock;
@property (retain, nonatomic) QLThumbnailRepresentation *mostRepresentativeThumbnail;
@property (retain, nonatomic) NSError *thumbnailRequestInvalidError;
@property (copy, nonatomic) id /* block */ requestUpdateBlock;
@property (copy, nonatomic) id /* block */ requestCompletionBlock;
@property (nonatomic) double minimumDimension;
@property (nonatomic) unsigned long long requestedTypes;

+ (id)operationWithThumbnailRequest:(id)a0;

- (void)setFinished:(BOOL)a0;
- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (void)_finishWithError:(id)a0;
- (void)_finish;
- (BOOL)isAsynchronous;
- (unsigned long long)badgeType;
- (void)start;
- (BOOL)isExecuting;
- (void)main;
- (void).cxx_destruct;
- (void)setBadgeType:(unsigned long long)a0;
- (void)cancel;
- (void)setExecuting:(BOOL)a0;
- (BOOL)_finishIfNeeded;
- (BOOL)wantsBaseline;
- (void)setWantsBaseline:(BOOL)a0;
- (id)initWithThumbnailRequest:(id)a0;
- (id)initWithFPItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1 minimumDimension:(double)a2 scale:(double)a3 iconMode:(BOOL)a4;
- (id)initWithFileAtURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 iconMode:(BOOL)a3;
- (id)sharedSerialResponseQueue;
- (void)setGenerationBehavior:(long long)a0;
- (long long)generationBehavior;
- (void)__finishWithError:(id)a0;
- (id)initWithFileAtURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
- (void)_finishIfRequestIsInvalid;

@end

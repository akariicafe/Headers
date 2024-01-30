@class MFAttachment, NSProgress;

@interface _MFAttachmentActiveRequest : NSObject

@property (readonly, nonatomic) MFAttachment *attachment;
@property (readonly, nonatomic) NSProgress *downloadProgress;
@property (readonly, copy, nonatomic) id /* block */ fetchCompletionBlock;
@property (readonly, nonatomic) BOOL wantsCompletionBlockOffMainThread;
@property (nonatomic) long long lastProgressBytes;
@property (nonatomic) double lastProgressTime;

- (void).cxx_destruct;
- (void)completeWithData:(id)a0 error:(id)a1;
- (id)initWithAttachment:(id)a0;

@end

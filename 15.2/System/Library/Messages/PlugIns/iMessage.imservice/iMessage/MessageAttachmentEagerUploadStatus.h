@class NSString, MessageAttachmentSingleStatus, NSURL, NSArray, NSObject;
@protocol OS_dispatch_group;

@interface MessageAttachmentEagerUploadStatus : NSObject {
    long long _waitCount;
    NSObject<OS_dispatch_group> *_uploadGroup;
}

@property long long state;
@property (retain) MessageAttachmentSingleStatus *attachmentStatus;
@property (readonly, retain) NSURL *originalURL;
@property (copy) NSString *transferredName;
@property (readonly, retain) NSString *transferId;
@property (readonly) long long targetSize;
@property (copy) NSArray *attachmentSendContexts;
@property unsigned long long totalBytes;
@property (readonly) long long useCount;
@property (readonly) double expiration;

- (void)finish;
- (BOOL)isComplete;
- (BOOL)isCanceled;
- (void)incrementUseCount;
- (id)description;
- (void)start;
- (void).cxx_destruct;
- (void)wait:(id /* block */)a0;
- (BOOL)isSuccess;
- (BOOL)cancel;
- (id)initWithOriginalURL:(id)a0 transferId:(id)a1 targetSize:(long long)a2;
- (void)attachToTransfer:(id)a0 messageGUID:(id)a1;

@end

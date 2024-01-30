@class NSManagedObjectID, NSString, NSURL, NSMutableArray, NSCache;

@interface ICAttachmentImageLoadingOperation : NSOperation

@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSManagedObjectID *attachmentObjectID;
@property (retain, nonatomic) NSURL *mediaURL;
@property (copy, nonatomic) NSString *cacheKey;
@property (nonatomic) short attachmentType;
@property (nonatomic) BOOL forceFullSizeImage;
@property (retain, nonatomic) NSMutableArray *completionHandlers;

- (id /* block */)addCompletionHandler:(id /* block */)a0;
- (void)main;
- (void).cxx_destruct;
- (id)initWithCache:(id)a0 attachment:(id)a1 attachmentType:(short)a2 forceFullSizeImage:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)removeCompletionHandler:(id /* block */)a0 cancelIfNoneLeft:(BOOL)a1;

@end

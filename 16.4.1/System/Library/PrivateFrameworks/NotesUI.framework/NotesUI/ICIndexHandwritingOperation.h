@class NSOperationQueue, NSManagedObjectContext, NSManagedObjectID;

@interface ICIndexHandwritingOperation : NSOperation

@property (class, readonly, nonatomic) NSOperationQueue *sharedOperationQueue;

@property (retain, nonatomic) NSManagedObjectID *attachmentObjectID;
@property (retain, nonatomic) NSManagedObjectContext *context;

- (void)main;
- (void).cxx_destruct;
- (id)initWithAttachmentObjectID:(id)a0 context:(id)a1;

@end

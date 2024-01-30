@interface PXImageExtraction : NSObject

@property (getter=isCancelled, setter=_setCancelled:) BOOL cancelled;

- (void)cancel;

@end

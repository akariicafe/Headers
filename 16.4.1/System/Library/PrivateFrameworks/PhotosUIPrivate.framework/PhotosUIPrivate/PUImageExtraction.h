@interface PUImageExtraction : NSObject

@property (getter=_isCancelled, setter=_setCancelled:) BOOL _cancelled;

- (void)cancel;

@end

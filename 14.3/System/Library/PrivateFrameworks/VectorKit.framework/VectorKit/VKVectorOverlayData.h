@protocol VKVectorOverlayDelegate;

@interface VKVectorOverlayData : NSObject

@property (nonatomic, getter=_delegate, setter=_setDelegate:) id<VKVectorOverlayDelegate> delegate;

@end

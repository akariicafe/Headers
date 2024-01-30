@protocol VKVectorOverlayDelegate;

@interface VKVectorOverlayData : NSObject

@property (nonatomic, getter=_delegate, setter=_setDelegate:) id<VKVectorOverlayDelegate> delegate;
@property (nonatomic) long long blendMode;

- (id)init;

@end

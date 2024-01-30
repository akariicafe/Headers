@protocol SHAppClipDelegate;

@interface SHAppClip : NSObject

@property (weak, nonatomic) id<SHAppClipDelegate> delegate;

- (void).cxx_destruct;
- (void)requestAppClipForURL:(id)a0;

@end

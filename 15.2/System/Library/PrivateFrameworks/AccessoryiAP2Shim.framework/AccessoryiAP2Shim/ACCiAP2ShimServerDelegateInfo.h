@protocol ACCiAP2ShimServerDelegate;

@interface ACCiAP2ShimServerDelegateInfo : NSObject

@property (readonly) id<ACCiAP2ShimServerDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

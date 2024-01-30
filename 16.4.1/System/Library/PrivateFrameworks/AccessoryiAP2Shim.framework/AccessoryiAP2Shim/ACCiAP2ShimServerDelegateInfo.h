@protocol ACCiAP2ShimServerDelegate;

@interface ACCiAP2ShimServerDelegateInfo : NSObject

@property (readonly) id<ACCiAP2ShimServerDelegate> delegate;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end

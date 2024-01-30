@protocol PRDevicePoseProviderDelegate;

@interface PRDevicePoseProvider : NSObject

@property (weak) id<PRDevicePoseProviderDelegate> delegate;

- (void).cxx_destruct;
- (void)reset;

@end

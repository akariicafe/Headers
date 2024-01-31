@class CLKDevice;

@interface CLKRenderingContext : NSObject {
    CLKDevice *_device;
}

@property (readonly, nonatomic) CLKDevice *device;

+ (id)sharedRenderingContext;

- (id)_init;
- (void)setDevice:(id)a0;
- (void).cxx_destruct;

@end

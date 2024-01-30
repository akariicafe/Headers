@class CLKDevice;

@interface CLKRenderingContext : NSObject {
    CLKDevice *_device;
}

@property (readonly, nonatomic) CLKDevice *device;

+ (id)sharedRenderingContext;

- (void)setDevice:(id)a0;
- (void).cxx_destruct;
- (id)_init;

@end

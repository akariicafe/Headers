@class UISDisplayContext, UISDeviceContext;

@interface PSKDeviceDisplayContext : NSObject

@property (readonly, nonatomic) UISDeviceContext *deviceContext;
@property (readonly, nonatomic) UISDisplayContext *displayContext;

- (void).cxx_destruct;
- (id)initWithDeviceContext:(id)a0 displayContext:(id)a1;

@end

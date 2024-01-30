@interface IDSAutoBugCapture : NSObject

+ (BOOL)isSupported;
+ (void)triggerCaptureWithEvent:(long long)a0 context:(id)a1 completion:(id /* block */)a2;
+ (void)triggerCaptureWithEvent:(long long)a0 destinations:(id)a1 context:(id)a2 completion:(id /* block */)a3;

@end

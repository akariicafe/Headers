@class DIDeviceHandle;

@interface DIController2ClientDelegate : NSObject <DIController2ClientProtocol>

@property (retain, nonatomic) DIDeviceHandle *deviceHandle;

- (void).cxx_destruct;
- (void)attachCompletedWithHandle:(id)a0 reply:(id /* block */)a1;

@end

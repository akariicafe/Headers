@interface CSAudioInjectionServices : NSObject

+ (BOOL)audioInjectionEnabled;
+ (void)connectDeviceWithUUID:(id)a0 completion:(id /* block */)a1;
+ (void)createAudioInjectionDeviceWithType:(long long)a0 deviceName:(id)a1 deviceID:(id)a2 productID:(id)a3 completion:(id /* block */)a4;
+ (void)disconnectDeviceWithUUID:(id)a0 completion:(id /* block */)a1;
+ (id)getAudioInjectionXPCConnection;
+ (void)injectAudio:(id)a0 toDeviceWithUUID:(id)a1 completion:(id /* block */)a2;
+ (void)injectAudio:(id)a0 toDeviceWithUUID:(id)a1 withNumChannels:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)injectAudio:(id)a0 toDeviceWithUUID:(id)a1 withfadingTimeWindowLength:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)pingpong:(id)a0 completion:(id /* block */)a1;
+ (void)primaryInputDeviceUUIDWithCompletion:(id /* block */)a0;
+ (BOOL)setAudioInjectionMode:(BOOL)a0;

@end

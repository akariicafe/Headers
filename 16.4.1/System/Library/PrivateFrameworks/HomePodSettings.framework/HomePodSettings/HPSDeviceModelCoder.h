@interface HPSDeviceModelCoder : NSObject <HomePodSettings.MessageSerializing>

- (id)serialize:(id)a0 error:(id *)a1;
- (id)init;
- (BOOL)deserialize:(id)a0 withElement:(id)a1 error:(id *)a2;

@end

@class NSUUID, NSString, NSObject;
@protocol OS_os_log;

@interface EFDevice : NSObject <EFLoggable>

@property (class, retain) EFDevice *currentDevice;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSUUID *identifier;
@property BOOL isInternal;
@property (readonly) NSString *platformName;
@property (readonly) BOOL isRunningNative;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)testingDeviceWithInternal:(BOOL)a0;
+ (void)executeWithDeviceIsExternal:(id /* block */)a0;
+ (void)executeWithDeviceIsInternal:(id /* block */)a0;

@end

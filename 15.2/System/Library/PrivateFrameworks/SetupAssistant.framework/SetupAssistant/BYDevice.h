@class NSString;

@interface BYDevice : NSObject <BYDeviceProvider>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long size;
@property (readonly, nonatomic) BOOL hasHomeButton;
@property (readonly, nonatomic) int mainScreenClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentDevice;

- (id)currentDevice;
- (id)init;

@end

@class NSString;

@interface _SVDMutableDeviceUnit : NSObject <SVDDeviceUnitMutating>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *roomName;
@property (nonatomic) long long proximity;
@property (copy, nonatomic) NSString *mediaRouteIdentifier;
@property (nonatomic) BOOL isCommunalDevice;
@property (copy, nonatomic) NSString *homeKitAccessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end

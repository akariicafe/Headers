@class NSArray, NSString;

@interface AVOutputDeviceLegacyFrecentsReader : NSObject <AVOutputDeviceFrecentsReading>

@property (readonly, nonatomic) NSArray *deviceIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultFrecentsReader;

- (id)frecencyInfoForDeviceWithID:(id)a0;

@end

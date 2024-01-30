@class NSString, AVExternalDeviceHIDInternal;

@interface AVExternalDeviceHID : NSObject {
    AVExternalDeviceHIDInternal *_externalDeviceHID;
}

@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSString *screenID;
@property (nonatomic) long long inputMode;

- (void)dealloc;
- (id)_externalDevice;
- (id)_figEndpointHIDInputMode;
- (id)initWithExternalDeviceAndHIDDictionary:(id)a0 hidDictionary:(id)a1;

@end

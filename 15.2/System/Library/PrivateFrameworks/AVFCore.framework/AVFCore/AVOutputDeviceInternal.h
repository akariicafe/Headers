@class NSString, NSData;
@protocol AVOutputDeviceImpl, AVOutputDeviceCommunicationChannelDelegate, AVOutputDeviceCommunicationChannelManager;

@interface AVOutputDeviceInternal : NSObject {
    id<AVOutputDeviceImpl> impl;
    NSString *name;
    NSString *ID;
    long long deviceType;
    long long deviceSubType;
    NSString *manufacturer;
    NSString *modelID;
    NSString *serialNumber;
    NSString *firmwareVersion;
    NSData *MACAddress;
    unsigned long long deviceFeatures;
    id<AVOutputDeviceCommunicationChannelDelegate> communicationChannelDelegate;
    id<AVOutputDeviceCommunicationChannelManager> commChannelManager;
}

- (void).cxx_destruct;

@end

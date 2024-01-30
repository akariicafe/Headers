@class AVInternalDeviceList;

@interface AVAudioDeviceList : NSObject {
    AVInternalDeviceList *_internalList;
}

@property (copy, nonatomic) id /* block */ changeListener;

+ (id)defaultOutputDevice;
+ (id)currentInputDevice;
+ (id)defaultInputDevice;
+ (BOOL)setInputDevice:(id)a0;
+ (id)deviceForUID:(id)a0;

- (id)outputDevices;
- (id)init;
- (void)dealloc;
- (id)devices;
- (id)inputDevices;

@end

@class AVInternalDeviceList;

@interface AVAudioDeviceList : NSObject {
    AVInternalDeviceList *_internalList;
}

@property (copy, nonatomic) id /* block */ changeListener;

+ (id)currentInputDevice;
+ (id)defaultOutputDevice;
+ (BOOL)setInputDevice:(id)a0;
+ (id)defaultInputDevice;
+ (id)deviceForDeviceID:(unsigned int)a0;
+ (id)deviceForUID:(id)a0;

- (id)outputDevices;
- (id)devices;
- (id)init;
- (id)inputDevices;
- (void)dealloc;

@end

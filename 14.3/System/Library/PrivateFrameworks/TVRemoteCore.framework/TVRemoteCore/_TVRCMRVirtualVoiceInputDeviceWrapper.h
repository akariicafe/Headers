@class NSArray, NSDictionary;

@interface _TVRCMRVirtualVoiceInputDeviceWrapper : NSObject {
    void *_deviceDescriptor;
}

@property (copy, nonatomic) NSArray *supportedFormats;
@property (copy, nonatomic) NSDictionary *defaultAudioFormat;

- (id)init;
- (void)dealloc;
- (void *)deviceDescriptor;

@end

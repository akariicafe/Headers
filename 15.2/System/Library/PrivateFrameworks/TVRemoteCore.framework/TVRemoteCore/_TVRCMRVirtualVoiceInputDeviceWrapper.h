@class NSArray, NSDictionary;

@interface _TVRCMRVirtualVoiceInputDeviceWrapper : NSObject {
    void *_deviceDescriptor;
}

@property (copy, nonatomic) NSArray *supportedFormats;
@property (copy, nonatomic) NSDictionary *defaultAudioFormat;

- (void *)deviceDescriptor;
- (id)init;
- (void)dealloc;

@end

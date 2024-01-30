@class TVRCDevice;

@interface TVRCVoiceRecorder : NSObject {
    TVRCDevice *_device;
    BOOL _recordsAutomatically;
}

@property (nonatomic) BOOL recordsAutomatically;

- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (id)_initWithDevice:(id)a0;

@end

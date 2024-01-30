@class TVRCDevice;

@interface TVRCVoiceRecorder : NSObject {
    TVRCDevice *_device;
    BOOL _recordsAutomatically;
}

@property (nonatomic) BOOL recordsAutomatically;

- (id)_initWithDevice:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)stop;

@end

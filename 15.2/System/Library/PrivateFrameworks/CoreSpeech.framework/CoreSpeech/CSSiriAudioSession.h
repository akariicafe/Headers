@class CSSiriAudioRoute, NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriAudioSession : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    CSSiriAudioRoute *_inputRoute;
    CSSiriAudioRoute *_outputRoute;
}

+ (id)sharedSession;
+ (id)currentInputDeviceUIDArray;

- (void).cxx_destruct;
- (id)init;
- (id)currentInputRoute;
- (id)currentOutputRoute;

@end

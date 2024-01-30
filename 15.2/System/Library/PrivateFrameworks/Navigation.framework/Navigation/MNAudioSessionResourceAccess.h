@class NSTimer, NSObject;
@protocol OS_dispatch_queue, MNAudioSessionAccessDelegate;

@interface MNAudioSessionResourceAccess : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_timer;
    unsigned long long _state;
}

@property (weak, nonatomic) id<MNAudioSessionAccessDelegate> delegate;
@property (readonly, nonatomic) unsigned long long promptStyle;
@property (readonly, nonatomic) unsigned long long state;

+ (BOOL)headphonesAreInUse;
+ (BOOL)deviceSpeakerIsInUse;

- (void)_cancelTimer;
- (void).cxx_destruct;
- (BOOL)activate;
- (id)init;
- (BOOL)deactivate;
- (void)dealloc;
- (void)_createTimer;
- (BOOL)updatePropertiesWithOptions:(id)a0 forTransportType:(int)a1 error:(out id *)a2;
- (void)_changeNumChannels;
- (id)_stringForAVAudioSessionErrorCode:(long long)a0;
- (void)_timeoutOccurred:(id)a0;

@end

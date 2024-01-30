@class NSObject;
@protocol OS_dispatch_queue, MNAudioSessionAccessDelegate;

@interface MNAudioSessionResourceAccess : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _state;
}

@property (weak, nonatomic) id<MNAudioSessionAccessDelegate> delegate;
@property (readonly, nonatomic) unsigned long long promptStyle;
@property (readonly, nonatomic) unsigned long long state;

+ (BOOL)deviceSpeakerIsInUse;
+ (BOOL)headphonesAreInUse;

- (BOOL)deactivate;
- (id)init;
- (BOOL)activate;
- (void).cxx_destruct;
- (void)_changeNumChannels;
- (id)_stringForAVAudioSessionErrorCode:(long long)a0;
- (BOOL)updatePropertiesWithOptions:(id)a0 forTransportType:(int)a1 error:(out id *)a2;

@end

@class NSUUID, NSMutableSet, TLAccessQueue;

@interface TKVibratorController : NSObject {
    TLAccessQueue *_accessQueue;
    NSUUID *_activePlayRequestIdentifier;
    NSMutableSet *_pendingStopRequestIdentifiers;
}

@property (readonly, nonatomic) unsigned long long vibratorState;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)turnOff;
- (void)turnOnWithVibrationPattern:(id)a0;
- (void)_turnOffIfAppropriate;
- (unsigned int)_previewVibrationSystemSoundID;
- (void)_vibrationDidCompleteWithPlayRequestIdentifier:(id)a0;

@end

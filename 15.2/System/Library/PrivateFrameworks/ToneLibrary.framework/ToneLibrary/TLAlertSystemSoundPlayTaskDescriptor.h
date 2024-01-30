@class TLAlert, TLAlertSystemSoundContext, TLSystemSound;

@interface TLAlertSystemSoundPlayTaskDescriptor : NSObject

@property (readonly, nonatomic) TLAlert *alert;
@property (readonly, nonatomic) TLSystemSound *sound;
@property (readonly, nonatomic) TLAlertSystemSoundContext *alertSystemSoundContext;

- (void).cxx_destruct;
- (id)initWithAlert:(id)a0 sound:(id)a1 alertSystemSoundContext:(id)a2;

@end

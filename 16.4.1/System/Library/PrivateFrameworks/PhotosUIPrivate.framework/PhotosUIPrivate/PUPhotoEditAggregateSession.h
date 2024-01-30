@class NSArray, NSString;

@interface PUPhotoEditAggregateSession : NSObject

@property (readonly, weak, nonatomic) NSArray *_autoCropKeys;
@property (nonatomic, setter=_setHasCropSuggestion:) BOOL _hasCropSuggestion;
@property (nonatomic, setter=_setHasPerspectiveCropSuggestion:) BOOL _hasPerspectiveCropSuggestion;
@property (nonatomic, setter=_setAutoCropAdjusted:) BOOL _autoCropAdjusted;
@property (nonatomic, setter=_setAutoCropReset:) BOOL _autoCropReset;
@property (nonatomic) BOOL toggledOriginal;
@property (nonatomic) BOOL pluginStarted;
@property (nonatomic) BOOL pluginSaved;
@property (retain, nonatomic) NSString *pluginIdentifier;
@property (nonatomic) BOOL shouldUseVideoKeys;
@property (nonatomic) double originalDuration;

- (void).cxx_destruct;
- (struct __CFString { } *)_keyForSessionEnd:(long long)a0;
- (void)_recordKeys:(id)a0;
- (id)_sessionKeysWithEnd:(long long)a0;
- (void)finishSessionWithEnd:(long long)a0;
- (id)finishSessionWithEnd:(long long)a0 newCompositionController:(id)a1 oldCompositionController:(id)a2;
- (void)notifyDidAdjustCrop;
- (void)notifyDidApplyAutoCrop;
- (void)notifyDidApplyPerspectiveAutoCrop;
- (void)notifyDidResetCrop;

@end

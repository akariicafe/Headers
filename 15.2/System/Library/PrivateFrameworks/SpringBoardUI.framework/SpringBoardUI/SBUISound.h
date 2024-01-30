@class NSDictionary, TLAlert, NSString;

@interface SBUISound : NSObject {
    id /* block */ _completionBlock;
}

@property (nonatomic) long long soundType;
@property (nonatomic) unsigned int systemSoundID;
@property (nonatomic, setter=_setResolvedSoundID:) unsigned int _resolvedSystemSoundID;
@property (nonatomic) unsigned long long soundBehavior;
@property (retain, nonatomic) NSDictionary *vibrationPattern;
@property (retain, nonatomic) TLAlert *toneAlert;
@property (copy, nonatomic) NSString *songPath;
@property (nonatomic) long long eventType;

+ (id)soundWithFeedbackEventType:(long long)a0;

- (id)initWithSystemSoundID:(unsigned int)a0 behavior:(unsigned long long)a1 vibrationPattern:(id)a2;
- (BOOL)isPlaying;
- (id)initWithFeedbackEventType:(long long)a0;
- (id)description;
- (id)initWithToneAlert:(long long)a0 accountIdentifier:(id)a1 toneIdentifier:(id)a2 vibrationIdentifier:(id)a3;
- (id)initWithSystemSoundPath:(id)a0 behavior:(unsigned long long)a1 vibrationPattern:(id)a2;
- (void).cxx_destruct;
- (BOOL)playInEvironments:(long long)a0 completion:(id /* block */)a1;
- (id /* block */)_completionBlock;
- (void)_setCompletionBlock:(id /* block */)a0;
- (id)initWithToneAlert:(id)a0;
- (void)stop;
- (id)initWithToneAlertConfiguration:(id)a0;

@end

@class NSString;

@interface STMutableVoiceControlStatusDomainData : STVoiceControlStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (nonatomic, getter=isVoiceControlActive) BOOL voiceControlActive;
@property (nonatomic) unsigned long long listeningState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)applyDiff:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setListeningState:(unsigned long long)a0;
- (void)setVoiceControlActive:(BOOL)a0;

@end

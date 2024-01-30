@class STMutableActivityAttributionCatalog, NSSet, NSString;

@interface STMutableMediaStatusDomainData : STMediaStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (readonly, copy, nonatomic) STMutableActivityAttributionCatalog *attributionCatalog;
@property (copy, nonatomic) NSSet *audioRecordingAttributions;
@property (copy, nonatomic) NSSet *mutedAudioRecordingAttributions;
@property (copy, nonatomic) NSSet *cameraCaptureAttributions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMutedAudioRecordingAttributions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCameraCaptureAttributions:(id)a0;
- (void)setAudioRecordingAttributions:(id)a0;
- (id)initWithAttributionCatalog:(id)a0;
- (void)removeCameraCaptureAttribution:(id)a0;
- (BOOL)applyDiff:(id)a0;
- (void)addMutedAudioRecordingAttribution:(id)a0;
- (void)addCameraCaptureAttribution:(id)a0;
- (void)addAudioRecordingAttribution:(id)a0;
- (void)removeMutedAudioRecordingAttribution:(id)a0;
- (void)removeAudioRecordingAttribution:(id)a0;

@end

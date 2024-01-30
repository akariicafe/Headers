@class NSString, NSHashTable;

@interface SXVolumeProvider : NSObject <SXVolumeProviding, SXVolumeReporting> {
    BOOL _muted;
    float _volume;
}

@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) BOOL muted;
@property (readonly, nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMuted:(BOOL)a0;
- (void)setVolume:(float)a0;
- (void).cxx_destruct;
- (id)initWithMuteState:(BOOL)a0 volume:(float)a1;
- (void)addVolumeObserver:(id)a0;
- (void)removeVolumeObserver:(id)a0;

@end

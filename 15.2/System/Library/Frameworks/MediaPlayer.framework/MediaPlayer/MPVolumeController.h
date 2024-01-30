@class NSString;
@protocol MPVolumeControllerDataSource, MPVolumeControllerDelegate;

@interface MPVolumeController : NSObject <MPVolumeControllerDataSourceDelegate> {
    int _volumeChangeCoalescingCount;
}

@property (weak, nonatomic) id<MPVolumeControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property (readonly, nonatomic) unsigned int volumeCapabilities;
@property (readonly, copy, nonatomic) NSString *volumeControlLabel;
@property (copy, nonatomic) NSString *volumeAudioCategory;
@property (nonatomic) float volumeValue;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (retain, nonatomic) id<MPVolumeControllerDataSource> dataSource;
@property (readonly, nonatomic) BOOL volumeWarningEnabled;
@property (readonly, nonatomic) long long volumeWarningState;
@property (readonly, nonatomic) float EUVolumeLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptionForWarningState:(long long)a0;

- (BOOL)muted;
- (id)initWithDataSource:(id)a0;
- (void)volumeControllerDataSource:(id)a0 didChangeMuted:(BOOL)a1;
- (void)volumeControllerDataSource:(id)a0 didChangeVolumeWarning:(long long)a1;
- (void)volumeControllerDataSource:(id)a0 didChangeVolumeControlAvailability:(BOOL)a1;
- (void)adjustVolumeValue:(float)a0;
- (void)setVolume:(float)a0 withNoticationDelay:(float)a1;
- (void)beginIncreasingRelativeVolume;
- (void)volumeControllerDataSource:(id)a0 didChangeVolumeLabel:(id)a1;
- (void)volumeControllerDataSource:(id)a0 didChangeEUVolumeLimitEnforced:(BOOL)a1;
- (void)volumeControllerDataSource:(id)a0 didChangeEUVolumeLimit:(float)a1;
- (void)volumeControllerDataSource:(id)a0 didChangeVolumeCapabilities:(unsigned int)a1;
- (void)updateVolumeWarningState;
- (void).cxx_destruct;
- (void)endIncreasingRelativeVolume;
- (id)init;
- (void)volumeControllerDataSource:(id)a0 didChangeVolume:(float)a1;
- (void)updateVolumeValue;
- (void)endDecreasingRelativeVolume;
- (void)getVolumeValueWithCompletion:(id /* block */)a0;
- (void)_updateVolumeControlAvailability;
- (void)volumeControllerDataSource:(id)a0 didChangeVolumeAudioCategory:(id)a1;
- (void)beginDecreasingRelativeVolume;

@end

@class NSDictionary, PUSlideshowMediaItem, OKProducerPreset;

@interface PUSlideshowSettingsViewModel : PUViewModel

@property (readonly, nonatomic) NSDictionary *propertyDictionary;
@property (retain, nonatomic) OKProducerPreset *preset;
@property (retain, nonatomic) PUSlideshowMediaItem *mediaItem;
@property (nonatomic) BOOL shouldRepeat;
@property (nonatomic) double stepDuration;
@property (nonatomic, getter=isMusicOn) BOOL musicOn;

- (id)newViewModelChange;
- (void)unregisterChangeObserver:(id)a0;
- (id)currentChange;
- (void)registerChangeObserver:(id)a0;
- (id)initWithPropertyDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end

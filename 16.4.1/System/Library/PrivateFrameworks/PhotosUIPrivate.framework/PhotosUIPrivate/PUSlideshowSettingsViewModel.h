@class NSDictionary, PUSlideshowMediaItem, OKProducerPreset;

@interface PUSlideshowSettingsViewModel : PUViewModel

@property (readonly, nonatomic) NSDictionary *propertyDictionary;
@property (retain, nonatomic) OKProducerPreset *preset;
@property (retain, nonatomic) PUSlideshowMediaItem *mediaItem;
@property (nonatomic) BOOL shouldRepeat;
@property (nonatomic) double stepDuration;
@property (nonatomic, getter=isMusicOn) BOOL musicOn;

- (void)registerChangeObserver:(id)a0;
- (id)newViewModelChange;
- (void)unregisterChangeObserver:(id)a0;
- (id)currentChange;
- (id)initWithPropertyDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end

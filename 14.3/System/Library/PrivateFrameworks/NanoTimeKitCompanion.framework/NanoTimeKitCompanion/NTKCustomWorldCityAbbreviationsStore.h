@class NPSManager;

@interface NTKCustomWorldCityAbbreviationsStore : NSObject {
    NPSManager *_npsManager;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handlePrefsChanged;
- (void)_notifyClientsOfChange;
- (id)customAbbreviations;
- (id)_getCustomAbbreviationsFromPrefs;
- (void)setCustomAbbreviation:(id)a0 forCityIdentifier:(id)a1;

@end

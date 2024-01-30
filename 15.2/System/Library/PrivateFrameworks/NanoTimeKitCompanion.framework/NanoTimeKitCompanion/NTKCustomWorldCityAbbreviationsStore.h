@class NPSManager;

@interface NTKCustomWorldCityAbbreviationsStore : NSObject {
    NPSManager *_npsManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_notifyClientsOfChange;
- (void)_handlePrefsChanged;
- (id)customAbbreviations;
- (id)_getCustomAbbreviationsFromPrefs;
- (void)setCustomAbbreviation:(id)a0 forCityIdentifier:(id)a1;

@end

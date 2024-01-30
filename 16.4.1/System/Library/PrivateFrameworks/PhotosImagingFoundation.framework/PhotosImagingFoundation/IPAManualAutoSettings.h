@class NSMutableDictionary;

@interface IPAManualAutoSettings : IPAAutoSettings {
    NSMutableDictionary *_state;
}

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)initWithIdentifier:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_applyArchiveDictionary:(id)a0;
- (void)_archiveIntoDictionary:(id)a0;

@end

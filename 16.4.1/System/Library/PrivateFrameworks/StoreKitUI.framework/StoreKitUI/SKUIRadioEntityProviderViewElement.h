@class NSString, NSArray, NSMapTable, RadioModel;

@interface SKUIRadioEntityProviderViewElement : SKUIAbstractEntityProviderViewElement <SKUIEntityProviding> {
    BOOL _hasValidStations;
    long long _countLimit;
    long long _radioEntityProviderType;
    RadioModel *_radioModel;
    NSArray *_stations;
    NSMapTable *_stationToStationEntityValueProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfSections;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_stations;
- (void)_radioModelDidChangeNotification:(id)a0;
- (id)entityValueProviderAtIndexPath:(id)a0;
- (id)_entityValueProviderForStation:(id)a0;
- (void)_invalidateWithContext:(id)a0;
- (id)applyUpdatesWithElement:(id)a0;
- (id)indexBarEntryEntityValueProviderAtIndex:(unsigned long long)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)a0;
- (unsigned long long)numberOfIndexBarEntries;
- (id)sectionEntityValueProviderAtIndex:(long long)a0;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)a0;

@end

@class NSMutableDictionary;

@interface BYChronicle : NSObject

@property (retain, nonatomic) NSMutableDictionary *featureEntries;

- (id)init;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)addEntry:(id)a0 forFeature:(unsigned long long)a1;
- (void)recordFeatureShown:(unsigned long long)a0;
- (id)entryForFeature:(unsigned long long)a0;

@end

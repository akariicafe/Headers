@class NSMutableDictionary;

@interface BYChronicle : NSObject

@property (retain, nonatomic) NSMutableDictionary *featureEntries;

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addEntry:(id)a0 forFeature:(unsigned long long)a1;
- (id)entryForFeature:(unsigned long long)a0;
- (void)recordFeatureShown:(unsigned long long)a0;

@end

@class NSMutableDictionary;

@interface BYChronicle : NSObject

@property (retain, nonatomic) NSMutableDictionary *featureEntries;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)addEntry:(id)a0 forFeature:(unsigned long long)a1;
- (void)recordFeatureShown:(unsigned long long)a0;
- (id)entryForFeature:(unsigned long long)a0;

@end

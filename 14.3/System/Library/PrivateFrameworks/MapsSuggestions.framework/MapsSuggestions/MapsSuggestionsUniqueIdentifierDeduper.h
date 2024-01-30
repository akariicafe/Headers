@class NSString;

@interface MapsSuggestionsUniqueIdentifierDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper> {
    long long _type;
    NSString *_name;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;

- (void).cxx_destruct;
- (BOOL)dedupeByEnrichingEntry:(id)a0 withEntry:(id)a1;
- (id)initWithType:(long long)a0;

@end

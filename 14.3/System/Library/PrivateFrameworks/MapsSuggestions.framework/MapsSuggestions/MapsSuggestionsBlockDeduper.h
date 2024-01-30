@class NSString;

@interface MapsSuggestionsBlockDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper> {
    id /* block */ _block;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deduperWithBlock:(id /* block */)a0;
+ (BOOL)isEnabled;

- (void).cxx_destruct;
- (BOOL)dedupeByEnrichingEntry:(id)a0 withEntry:(id)a1;
- (id)initWithBlock:(id /* block */)a0;

@end

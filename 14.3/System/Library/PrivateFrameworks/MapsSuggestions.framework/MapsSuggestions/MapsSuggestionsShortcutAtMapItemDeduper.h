@class NSString;

@interface MapsSuggestionsShortcutAtMapItemDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper> {
    struct vector<MapsSuggestionsEntryType, std::__1::allocator<MapsSuggestionsEntryType> > { long long *__begin_; long long *__end_; struct __compressed_pair<MapsSuggestionsEntryType *, std::__1::allocator<MapsSuggestionsEntryType> > { long long *__value_; } __end_cap_; } _types;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;

- (void).cxx_destruct;
- (BOOL)dedupeByEnrichingEntry:(id)a0 withEntry:(id)a1;
- (id).cxx_construct;
- (id)initWithSacrificedTypes:(const struct vector<MapsSuggestionsEntryType, std::__1::allocator<MapsSuggestionsEntryType> > { long long *x0; long long *x1; struct __compressed_pair<MapsSuggestionsEntryType *, std::__1::allocator<MapsSuggestionsEntryType> > { long long *x0; } x2; } *)a0;

@end

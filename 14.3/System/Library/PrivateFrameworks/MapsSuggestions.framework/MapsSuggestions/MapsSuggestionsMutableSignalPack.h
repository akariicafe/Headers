@interface MapsSuggestionsMutableSignalPack : MapsSuggestionsSignalPack <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;


- (BOOL)addFromEntry:(id)a0;
- (void)removeAll;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1 gathered:(id)a2 expires:(id)a3;
- (id)copy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)removeSignalType:(long long)a0;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1;
- (BOOL)addFromMapItem:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1 gathered:(id)a2;

@end

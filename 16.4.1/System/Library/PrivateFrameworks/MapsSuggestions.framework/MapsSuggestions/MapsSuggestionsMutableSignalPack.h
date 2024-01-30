@interface MapsSuggestionsMutableSignalPack : MapsSuggestionsSignalPack <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;


- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)removeSignalType:(long long)a0;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1 gathered:(id)a2 expires:(id)a3;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1;
- (BOOL)addFromMapItem:(id)a0;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1 gathered:(id)a2;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeAll;
- (id)copy;
- (BOOL)addFromEntry:(id)a0;

@end

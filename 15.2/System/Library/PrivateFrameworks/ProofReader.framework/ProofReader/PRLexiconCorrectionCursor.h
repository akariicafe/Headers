@interface PRLexiconCorrectionCursor : NSObject

@property (readonly) struct _LXCursor { } *cursor;
@property (readonly) unsigned long long replacementsCount;
@property (readonly) unsigned long long insertionsCount;
@property (readonly) unsigned long long deletionsCount;
@property (readonly) unsigned long long transpositionsCount;
@property (readonly) unsigned long long advancementLength;
@property (readonly) unsigned long long totalEdits;
@property (readonly) double prefixProbability;
@property (readonly) unsigned long long errorType;

- (id)description;
- (void)dealloc;
- (id)initWithCursor:(struct _LXCursor { } *)a0 replacementsCount:(unsigned long long)a1 insertionsCount:(unsigned long long)a2 deletionsCount:(unsigned long long)a3 transpositionsCount:(unsigned long long)a4 advancementLength:(unsigned long long)a5;

@end

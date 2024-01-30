@class NSMutableDictionary, NSMapTable, NSData, NSMutableData, NSDictionary;

@interface TUIKBGraphSerialization : NSObject {
    NSMapTable *_serializedOffsets;
    NSDictionary *_keyboardOffsets;
    NSData *_keyboardOffsetsData;
    NSData *_graphData;
    NSData *_serializedData;
    NSMutableDictionary *_minEdgeWidths;
    NSMutableDictionary *_maxEdgeWidths;
    NSMutableDictionary *_referenceCount;
    BOOL _disableOffsets;
}

@property (readonly, nonatomic) NSMutableData *graphData;
@property (readonly, nonatomic) NSMutableDictionary *keyboardOffsets;
@property (retain, nonatomic) NSData *serializedData;
@property (retain, nonatomic) NSMutableDictionary *deserializationCache;
@property (nonatomic) long long currentFileType;

+ (id)separatorCharacterSet;

- (id)geometryForOffset:(int *)a0 withFlags:(unsigned long long)a1;
- (float)compressedFloatForOffset:(int *)a0 withKind:(unsigned char)a1;
- (id)dataForCompressedFloat:(float)a0 kind:(unsigned char *)a1;
- (id)mutableDataForObjectType:(unsigned char)a0 withFlags:(unsigned long long)a1;
- (id)dataForGeometry:(id)a0;
- (BOOL)stringIsSimple:(id)a0;
- (id)mutableDataForObjectType:(unsigned char)a0 withSize:(unsigned long long)a1;
- (id)stringConcatForOffset:(int *)a0 withComponentCount:(unsigned long long)a1;
- (id)dataForBareFloat:(float)a0;
- (unsigned long long)compressedUIntForOffset:(int *)a0;
- (id)dataForOffsetObject:(id)a0;
- (id)setForOffset:(int *)a0 nonEmpty:(BOOL)a1;
- (id)mutableDataForObjectType:(unsigned char)a0;
- (id)keyboardForName:(id)a0;
- (id)sanitizedDictionary:(id)a0;
- (id)simpleStringForOffset:(int *)a0 withUTF8Length:(unsigned long long)a1;
- (id)keyboardPrefixForWidth:(float)a0 andEdge:(BOOL)a1;
- (unsigned char)flagsForOffset:(int *)a0;
- (id)objectForOffset:(int *)a0;
- (id)statistics;
- (id)dataForUIKBValue:(struct { double x0; int x1; })a0;
- (id)dataForReference:(int)a0;
- (id)dataForShape:(id)a0;
- (struct { double x0; int x1; })UIKBValueForOffset:(int *)a0;
- (id)shapeForOffset:(int *)a0 withFlags:(unsigned long long)a1;
- (id)dataForSimpleString:(id)a0;
- (void)addKeyboardPrefix:(id)a0 forWidth:(float)a1 minEdge:(BOOL)a2;
- (id)dataForString:(id)a0;
- (float)bareFloatForOffset:(int *)a0;
- (int)_serializedOffsetForObject:(id)a0;
- (void)dealloc;
- (id)dictionaryForOffset:(int *)a0 nonEmpty:(BOOL)a1;
- (unsigned long long)compressedIntForOffset:(int *)a0;
- (id)dataForSet:(id)a0;
- (id)dataForCompressedUInt:(unsigned long long)a0;
- (void)persistData:(id)a0 forObject:(id)a1;
- (id)dataForObject:(id)a0;
- (id)dataForCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)dataForInt:(int)a0;
- (id)dataForArray:(id)a0;
- (id)stringsBySplittingString:(id)a0 afterCharactersInSet:(id)a1;
- (id)dataForFlags:(unsigned char)a0;
- (id)dataForFloat:(float)a0;
- (id)dataForMergeAction:(id)a0;
- (id)init;
- (id)refArrayForOffset:(int *)a0 withCount:(unsigned long long)a1;
- (id)mergeActionForOffset:(int *)a0 withFlags:(unsigned long long)a1;
- (id)dataForUIKBTree:(id)a0;
- (id)_objectAtSerializedOffset:(int)a0;
- (id)dataForStringConcat:(id)a0;
- (void)serializeObject:(id)a0;
- (int)intValueForOffset:(int *)a0;
- (id)dataForCompressedInt:(long long)a0;
- (id)UIKBTreeForOffset:(int *)a0 withFlags:(unsigned long long)a1;
- (id)arrayForOffset:(int *)a0 withCount:(unsigned long long)a1;
- (float)floatValueForOffset:(int *)a0;
- (id)dataForDictionary:(id)a0;
- (id)_UIKBTreeForOffset:(int *)a0 withFlags:(unsigned long long)a1;
- (void)preheatWithStatistics:(id)a0;
- (id)relativeRefArrayForOffset:(int *)a0 withCount:(unsigned long long)a1;
- (id)keyboardSuffixForPortraitWidth:(float)a0;
- (unsigned long long)serializedObjectCount;
- (void)reset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })CGRectForOffset:(int *)a0;

@end

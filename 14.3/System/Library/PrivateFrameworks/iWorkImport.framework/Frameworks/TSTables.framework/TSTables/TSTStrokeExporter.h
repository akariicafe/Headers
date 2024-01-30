@class TSTTableInfo, NSPointerArray, TSUIntegerKeyDictionary;
@protocol TSTCustomStrokeProviding, TSTTableStrokeProviding;

@interface TSTStrokeExporter : NSObject

@property (readonly, retain, nonatomic) id<TSTTableStrokeProviding> defaultStrokeProvider;
@property (readonly, retain, nonatomic) id<TSTCustomStrokeProviding> customStrokeProvider;
@property (readonly, retain, nonatomic) TSTTableInfo *tableProvider;
@property (readonly, retain, nonatomic) NSPointerArray *topRowStrokes;
@property (readonly, retain, nonatomic) NSPointerArray *bottomRowStrokes;
@property (readonly, retain, nonatomic) NSPointerArray *leftColumnStrokes;
@property (readonly, retain, nonatomic) NSPointerArray *rightColumnStrokes;
@property (retain, nonatomic) TSUIntegerKeyDictionary *rowStrokeExportCache;
@property (retain, nonatomic) TSUIntegerKeyDictionary *columnStrokeExportCache;

- (void)dealloc;
- (id)initWithDefaultStrokeProvider:(id)a0 customStrokeProvider:(id)a1 tableProvider:(id)a2;
- (void)p_resolveStrokes;
- (void)strokesForCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 top:(id *)a1 left:(id *)a2 bottom:(id *)a3 right:(id *)a4;

@end

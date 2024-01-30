@class TSTTableInfo, NSPointerArray;
@protocol TSTTableInternalGeometryProviding, TSTTableStrokeProviding, TSTTableHiddenRowColumnProviding;

@interface TSTStrokeDefaultVendor : NSObject

@property (weak, nonatomic) id<TSTTableHiddenRowColumnProviding, TSTTableInternalGeometryProviding> tableProvider;
@property (weak, nonatomic) TSTTableInfo *categoryProvider;
@property (nonatomic) BOOL isValid;
@property (retain, nonatomic) NSPointerArray *strokeTypeToLayerMap;
@property (retain, nonatomic) NSPointerArray *strokeTypeToLayerStackMap;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } headerSideBorderColumnRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } headerColumnSeparatorColumnRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } bodySideBorderColumnRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } topBorderRowRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } headerRowSeparatorRowRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } footerRowSeparatorRowRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } bottomBorderRowRange;
@property (weak, nonatomic) id<TSTTableStrokeProviding> strokeProvider;

- (void).cxx_destruct;
- (void)invalidate;
- (int)validateChangeDescriptors:(id)a0;
- (int)p_strokeTypeForColumn:(unsigned int)a0;
- (id)strokeLayerForStrokeType:(int)a0;
- (int)p_strokeTypeForRow:(unsigned int)a0;
- (id)strokeLayerStackForStrokeType:(int)a0;
- (BOOL)validateGeometry;
- (void)p_updateStrokeLayer:(id)a0 forColumnStrokeType:(int)a1;
- (void)p_updateStrokeLayer:(id)a0 forRowStrokeType:(int)a1;
- (BOOL)p_headerColumnSeparatorColumnRangeIsValid;
- (BOOL)p_headerRowSeparatorRowRangeIsValid;
- (id)initWithStrokeProvider:(id)a0 tableProvider:(id)a1 categoryProvider:(id)a2;
- (id)strokeLayerForColumn:(unsigned int)a0;
- (id)strokeLayerForRow:(unsigned int)a0;
- (id)strokeLayerStackForColumn:(unsigned int)a0;
- (id)strokeLayerStackForRow:(unsigned int)a0;

@end

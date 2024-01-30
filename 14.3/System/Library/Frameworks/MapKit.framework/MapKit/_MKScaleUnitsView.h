@class NSString, NSNumberFormatter, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary;

@interface _MKScaleUnitsView : UIView {
    BOOL _useLightText;
    double _segmentLengthInPixels;
    double _justUnitsWidth;
    NSDictionary *_legendAttributes;
    NSMutableArray *_strings;
    NSMapTable *_legendStringWidthCache;
    NSMutableDictionary *_legendStringForDistanceStringCache;
}

@property (nonatomic, getter=isRTL) BOOL RTL;
@property (nonatomic) BOOL useLightText;
@property (nonatomic) double segmentLengthInPixels;
@property (readonly, nonatomic) double unitsWidth;
@property (retain, nonatomic) NSString *legendBaseString;
@property (retain, nonatomic) NSString *unitsString;
@property (copy, nonatomic) NSString *unpaddedUnitsString;
@property (retain, nonatomic) NSNumberFormatter *floatNumberFormatter;
@property (readonly, nonatomic) NSString *zeroUnitsString;

- (void)clearCaches:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (double)_widthForString:(id)a0 attributes:(id)a1;
- (void)_calculateLegend:(BOOL)a0;
- (id)_legendStringForDistanceString:(id)a0 appendUnits:(BOOL)a1 index:(int)a2;
- (id)_uncachedLegendStringsForDistanceString:(id)a0;
- (BOOL)canDisplaySegment:(unsigned long long)a0;
- (void)setSegmentLengthInPixels:(double)a0;
- (BOOL)useLightText;
- (void)setUnits:(id)a0;
- (void)setUseLightText:(BOOL)a0;

@end

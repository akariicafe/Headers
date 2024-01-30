@class NSArray, NSString;

@interface NWKUIAirQualityColorIndex : NWKUIColorIndex <NWKUIColorIndexable>

@property (class, readonly) unsigned long long lastIndex;
@property (class, readonly, nonatomic) NSArray *allIndices;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)colorForIndex:(unsigned long long)a0;
+ (id)colorIndexWithIndex:(double)a0 color:(id)a1;

- (id)initWithIndex:(double)a0 color:(id)a1;

@end

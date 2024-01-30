@class NSArray, NSString;

@interface NWMUltravioletIndexColorIndex : NWKUIColorIndex <NWKUIColorIndexable>

@property (class, readonly, nonatomic) double lastValue;
@property (class, readonly, nonatomic) NSArray *allIndices;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)indexWithUltravioletIndexValue:(double)a0 color:(id)a1;

- (id)initWithUltravioletIndexValue:(double)a0 color:(id)a1;

@end

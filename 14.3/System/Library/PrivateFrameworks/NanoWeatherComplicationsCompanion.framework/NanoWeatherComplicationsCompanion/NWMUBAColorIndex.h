@class NSArray, NSString;

@interface NWMUBAColorIndex : NWMAirQualityColorIndex <NWColorIndexable>

@property (class, readonly, nonatomic) NSArray *allIndices;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end

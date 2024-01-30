@class NSString;
@protocol SXEdgeSpacing;

@interface SXAutoPlacementLayout : SXJSONObject <SXAutoPlacementLayout>

@property (readonly, nonatomic) id<SXEdgeSpacing> margin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)marginWithValue:(id)a0 withType:(int)a1;

@end

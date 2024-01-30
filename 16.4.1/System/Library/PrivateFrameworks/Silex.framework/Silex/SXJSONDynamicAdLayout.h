@class NSString;
@protocol SXEdgeSpacing;

@interface SXJSONDynamicAdLayout : SXJSONObject <SXAutoPlacementLayout>

@property (readonly, nonatomic) id<SXEdgeSpacing> margin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)classForProtocolProperty:(id)a0 withValue:(id)a1;


@end

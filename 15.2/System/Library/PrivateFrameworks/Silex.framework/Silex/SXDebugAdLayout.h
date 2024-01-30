@class NSString;
@protocol SXEdgeSpacing;

@interface SXDebugAdLayout : NSObject <SXAutoPlacementLayout>

@property (readonly, nonatomic) id<SXEdgeSpacing> margin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMargin:(struct _SXConvertibleValue { double x0; unsigned long long x1; })a0;

@end

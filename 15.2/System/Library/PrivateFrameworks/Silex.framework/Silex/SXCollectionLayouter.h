@class SXContainerComponentBlueprint, NSString, SXLayouterFactory;
@protocol SXLayouterDelegate, SXColumnCalculator, SXUnitConverterFactory;

@interface SXCollectionLayouter : NSObject <SXLayouter>

@property (readonly, nonatomic) SXLayouterFactory *layouterFactory;
@property (readonly, nonatomic) SXContainerComponentBlueprint *containerComponentBlueprint;
@property (readonly, nonatomic) id<SXColumnCalculator> columnCalculator;
@property (readonly, nonatomic) id<SXUnitConverterFactory> unitConverterFactory;
@property (weak, nonatomic) id<SXLayouterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

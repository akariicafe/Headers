@class NSString;

@interface SXUnitConverterFactory : NSObject <SXUnitConverterFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createUnitConverterWithComponentWidth:(double)a0 parentWidth:(double)a1 layoutOptions:(id)a2;

@end

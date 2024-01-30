@class NTKComplication;

@interface NTKComplicationDataSource : CLKCComplicationDataSource

@property (readonly, nonatomic) NTKComplication *complication;

+ (BOOL)acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;
+ (BOOL)acceptsComplicationType:(unsigned long long)a0 withFamily:(long long)a1 forDevice:(id)a2;
+ (Class)dataSourceClassForComplicationType:(unsigned long long)a0 family:(long long)a1 forDevice:(id)a2;

- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (Class)richComplicationDisplayViewClassForDevice:(id)a0;
- (id)sampleTemplate;

@end

@class IFColor;
@protocol ISCompositorResource;

@interface ISSymbolLayer : ISLayer

@property (retain, nonatomic) IFColor *color;
@property (retain, nonatomic) id<ISCompositorResource> symbol;
@property (nonatomic) double fontSize;
@property (nonatomic) unsigned long long symbolSize;
@property (nonatomic) long long symbolWeight;

- (void).cxx_destruct;
- (id)init;

@end

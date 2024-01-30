@class IFColor;
@protocol ISCompositorResource;

@interface ISContentLayer : ISLayer

@property (retain, nonatomic) IFColor *backgroundColor;
@property (retain, nonatomic) id<ISCompositorResource> content;
@property (nonatomic) BOOL acceptSymbol;

- (void).cxx_destruct;
- (id)init;

@end

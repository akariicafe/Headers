@class NSArray, SKUILabelViewElement;

@interface SKUIStackItemViewElement : SKUIItemViewElement

@property (readonly, nonatomic) NSArray *imageElements;
@property (readonly, nonatomic) SKUILabelViewElement *textElement;

- (long long)pageComponentType;

@end

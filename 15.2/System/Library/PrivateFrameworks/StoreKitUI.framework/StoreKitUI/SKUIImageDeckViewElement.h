@interface SKUIImageDeckViewElement : SKUIViewElement

@property (readonly, nonatomic) double initialDragLeft;
@property (readonly, nonatomic) double initialDragRight;
@property (readonly, nonatomic) double additionalDragLeft;
@property (readonly, nonatomic) double additionalDragRight;

- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end

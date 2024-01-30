@interface InvokeMakerInfo : NSObject

@property (nonatomic) SEL selector;
@property (retain, nonatomic) id target;

- (id)initWithSel:(SEL)a0 andTarget:(id)a1;
- (void).cxx_destruct;

@end

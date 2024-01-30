@class IKViewElementStyleFactory, IKViewElement;

@interface IKViewElementFactoryContext : NSObject

@property (retain, nonatomic) IKViewElementStyleFactory *styleFactory;
@property (retain, nonatomic) IKViewElement *headViewElement;
@property (retain, nonatomic) IKViewElement *navigationBarViewElement;
@property (retain, nonatomic) IKViewElement *toolBarViewElement;
@property (retain, nonatomic) IKViewElement *templateViewElement;
@property (nonatomic) unsigned long long updateType;

- (void).cxx_destruct;

@end

@class NSString, IKViewElement, NSArray, NSDictionary, TVViewElementStyle;

@interface TVViewElement : NSObject <NSCopying>

@property (readonly, weak, nonatomic) IKViewElement *element;
@property (readonly, nonatomic) long long semanticContentAttribute;
@property (nonatomic, getter=isParsedOnce) BOOL parsedOnce;
@property (readonly, nonatomic) NSString *elementIdentifier;
@property (readonly, nonatomic) NSString *elementName;
@property (readonly, weak, nonatomic) TVViewElement *parentViewElement;
@property (readonly, nonatomic) NSArray *childViewElements;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) TVViewElementStyle *style;
@property (readonly, nonatomic) NSString *autoHighlightIdentifier;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly, nonatomic) long long updateType;
@property (readonly, nonatomic) NSDictionary *elementData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithViewElement:(id)a0;
- (void)resetProperty:(long long)a0;
- (void)dispatchEventOfType:(long long)a0 canBubble:(BOOL)a1 cancellable:(BOOL)a2 extraInfo:(id)a3 completion:(id /* block */)a4;
- (void)dispatchEventWithName:(id)a0 canBubble:(BOOL)a1 cancellable:(BOOL)a2 extraInfo:(id)a3 completion:(id /* block */)a4;

@end

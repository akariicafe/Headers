@class NSString;

@interface SKUICommentTemplateViewElement : SKUIViewElement

@property (readonly, nonatomic) NSString *asText;
@property (readonly, nonatomic) NSString *asFormat;
@property (readonly, nonatomic) NSString *commentAsText;
@property (readonly, nonatomic) NSString *myselfText;
@property (readonly, nonatomic) NSString *postButtonText;
@property (readonly, nonatomic) NSString *postPlaceholderText;
@property (readonly, nonatomic) BOOL scrollNewCommentToView;
@property (readonly, nonatomic) BOOL showKeyboard;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end

@class SGMicrodataDocument, NSArray;

@interface SGMicrodataParserStackItem : NSObject

@property (readonly) SGMicrodataDocument *document;
@property (readonly) SGMicrodataParserStackItem *parent;
@property (readonly) NSArray *textConsumers;
@property (readonly) NSArray *itemScopes;

- (id)initWithDocument:(id)a0;
- (void).cxx_destruct;
- (id)initWithParent:(id)a0 item:(id)a1 htmlId:(id)a2 textConsumer:(id)a3;

@end

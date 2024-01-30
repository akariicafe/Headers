@class SGMicrodataDocument, NSArray;

@interface SGMicrodataParserStackItem : NSObject

@property (readonly) SGMicrodataDocument *document;
@property (readonly) SGMicrodataParserStackItem *parent;
@property (readonly) NSArray *textConsumers;
@property (readonly) NSArray *itemScopes;

- (void).cxx_destruct;
- (id)initWithDocument:(id)a0;
- (id)initWithParent:(id)a0 item:(id)a1 htmlId:(id)a2 textConsumer:(id)a3;

@end

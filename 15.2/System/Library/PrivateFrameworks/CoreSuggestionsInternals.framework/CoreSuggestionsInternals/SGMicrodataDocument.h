@class NSMutableDictionary, NSMutableArray;

@interface SGMicrodataDocument : NSObject

@property (readonly, nonatomic) NSMutableDictionary *htmlIds;
@property (readonly, nonatomic) NSMutableArray *items;

- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)jsonLdForItem:(id)a0;
- (id)asJsonLd;
- (void)setHtmlIdItemScope:(id)a0 forHtmlId:(id)a1;

@end

@class NSMutableDictionary, NSMutableArray;

@interface SGMicrodataDocument : NSObject

@property (readonly, nonatomic) NSMutableDictionary *htmlIds;
@property (readonly, nonatomic) NSMutableArray *items;

- (void)addItem:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)asJsonLd;
- (id)jsonLdForItem:(id)a0;
- (void)setHtmlIdItemScope:(id)a0 forHtmlId:(id)a1;

@end

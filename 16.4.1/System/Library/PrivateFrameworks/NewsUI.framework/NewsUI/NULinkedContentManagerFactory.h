@class NSMutableArray;

@interface NULinkedContentManagerFactory : NSObject

@property (readonly, nonatomic) NSMutableArray *factories;

- (id)init;
- (void).cxx_destruct;
- (void)addLinkedContentProviderFactory:(id)a0;
- (id)createLinkedContentManagerForArticle:(id)a0;

@end

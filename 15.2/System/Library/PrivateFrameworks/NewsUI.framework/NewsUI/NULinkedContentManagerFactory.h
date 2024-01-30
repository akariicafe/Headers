@class NSMutableArray;

@interface NULinkedContentManagerFactory : NSObject

@property (readonly, nonatomic) NSMutableArray *factories;

- (void).cxx_destruct;
- (id)init;
- (void)addLinkedContentProviderFactory:(id)a0;
- (id)createLinkedContentManagerForArticle:(id)a0;

@end

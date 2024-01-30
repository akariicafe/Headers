@class NSString;
@protocol FCContentContext;

@interface NUANFLinkedContentProviderFactory : NSObject <NULinkedContentProviderFactory>

@property (readonly, nonatomic) id<FCContentContext> contentContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContentContext:(id)a0;
- (id)createLinkedContentProviderForArticle:(id)a0;

@end

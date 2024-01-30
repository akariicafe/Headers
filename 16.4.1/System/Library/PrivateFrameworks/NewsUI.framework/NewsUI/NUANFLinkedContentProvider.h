@class NSDictionary, NSString;
@protocol FCContentContext;

@interface NUANFLinkedContentProvider : NSObject <NULinkedContentProvider>

@property (readonly, nonatomic) id<FCContentContext> contentContext;
@property (copy, nonatomic) NSDictionary *linkedHeadlines;
@property (copy, nonatomic) NSDictionary *linkedTags;
@property (copy, nonatomic) NSDictionary *linkedIssues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContentContext:(id)a0;
- (id)headlineForIdentifier:(id)a0;
- (id)tagForIdentifier:(id)a0;
- (id)loadLinkedContentForHeadline:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (id)loadLinkedContentForHeadline:(id)a0 withContext:(id)a1 priority:(long long)a2 completion:(id /* block */)a3;
- (id)issueForIdentifier:(id)a0;
- (id)loadLinkedArticlesWithIDs:(id)a0 priority:(long long)a1 completion:(id /* block */)a2;
- (id)loadLinkedIssuesWithIDs:(id)a0 priority:(long long)a1 completion:(id /* block */)a2;
- (id)loadLinkedTagsWithIDs:(id)a0 priority:(long long)a1 completion:(id /* block */)a2;

@end

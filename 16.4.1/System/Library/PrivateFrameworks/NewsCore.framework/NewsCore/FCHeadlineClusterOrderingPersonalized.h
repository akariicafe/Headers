@class NSString;

@interface FCHeadlineClusterOrderingPersonalized : NSObject <FCHeadlineClusterOrdering>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)orderTopicsWithClusteredHeadlines:(id)a0 additionalHeadlines:(id)a1 subscribedTagIDs:(id)a2 scoresByArticleID:(id)a3 personalizer:(id)a4 tagNameProvider:(id /* block */)a5 personalizationTreatment:(id)a6 translationProvider:(id)a7;

@end

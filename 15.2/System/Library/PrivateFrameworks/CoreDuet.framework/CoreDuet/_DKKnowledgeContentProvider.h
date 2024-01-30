@class NSString;
@protocol _DKKnowledgeQuerying;

@interface _DKKnowledgeContentProvider : NSObject <_DKContentProvider>

@property (retain, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

@class NSString, CPTemplate, CPSTemplateEnvironment;
@protocol CPEntityClientTemplateDelegate, CPSEntityActionDelegate, CPEntityProviding;

@interface CPSEntityResourceProvider : NSObject <CPEntityUpdateProviding>

@property (weak, nonatomic) CPTemplate<CPEntityProviding> *entityTemplate;
@property (weak, nonatomic) id<CPEntityClientTemplateDelegate> templateDelegate;
@property (readonly, weak, nonatomic) CPSTemplateEnvironment *templateEnvironment;
@property (readonly, weak, nonatomic) id<CPSEntityActionDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

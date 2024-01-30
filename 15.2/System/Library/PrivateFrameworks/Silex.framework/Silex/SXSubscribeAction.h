@class NSString, SXJSONDictionary;
@protocol SXAction;

@interface SXSubscribeAction : NSObject <SXSubscribeAction>

@property (readonly, nonatomic) id<SXAction> postPurchaseAction;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) SXJSONDictionary *analytics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end

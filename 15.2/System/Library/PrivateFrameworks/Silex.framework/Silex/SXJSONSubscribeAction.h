@class NSString, SXJSONDictionary;
@protocol SXAction;

@interface SXJSONSubscribeAction : SXJSONAction <SXSubscribeAction>

@property (readonly, nonatomic) id<SXAction> postPurchaseAction;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) SXJSONDictionary *analytics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)classForProtocolProperty:(id)a0 withValue:(id)a1;


@end

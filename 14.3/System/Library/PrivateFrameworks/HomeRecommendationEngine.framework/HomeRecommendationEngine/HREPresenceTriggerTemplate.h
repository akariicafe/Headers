@class NSString, NSDictionary;

@interface HREPresenceTriggerTemplate : HRETemplate

@property (readonly, nonatomic) NSString *formatStarter;
@property (readonly, nonatomic) NSDictionary *actionKeyDictionary;

- (id)naturalLanguageTitleForObjectsInContext:(id)a0 forRecommendation:(id)a1 options:(id)a2;

@end

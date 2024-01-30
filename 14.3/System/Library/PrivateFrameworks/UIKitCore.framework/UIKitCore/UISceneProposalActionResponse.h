@class NSString;

@interface UISceneProposalActionResponse : BSActionResponse

@property (readonly, copy, nonatomic) NSString *sceneIdentifier;

+ (id)responseWithSceneID:(id)a0;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithInfo:(id)a0 error:(id)a1;
- (id)responseWithSceneID:(id)a0;

@end

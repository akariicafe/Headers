@class NSString;

@interface UISceneProposalActionResponse : BSActionResponse

@property (readonly, copy, nonatomic) NSString *persistentIdentifier;
@property (readonly, copy, nonatomic) NSString *sceneIdentifier;

+ (id)responseWithPersistentIdentifier:(id)a0;
+ (id)responseWithSceneID:(id)a0;

- (id)initWithInfo:(id)a0 error:(id)a1;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)_responseWithPersistentIdentifier:(id)a0;

@end

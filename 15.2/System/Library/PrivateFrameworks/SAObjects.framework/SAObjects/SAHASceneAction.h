@class NSURL, SAHAAction;

@interface SAHASceneAction : SADomainObject

@property (retain, nonatomic) SAHAAction *action;
@property (copy, nonatomic) NSURL *entityId;

+ (id)sceneAction;
+ (id)sceneActionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

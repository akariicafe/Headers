@interface IKDOMLSParser : IKJSObject <IKJSDOMLSParser>

@property (readonly, getter=appendAsChildrenAction) long long ACTION_APPEND_AS_CHILDREN;
@property (readonly, getter=replaceChildrenAction) long long ACTION_REPLACE_CHILDREN;
@property (readonly, getter=insertBeforeAction) long long ACTION_INSERT_BEFORE;
@property (readonly, getter=insertAfterAction) long long ACTION_INSERT_AFTER;
@property (readonly, getter=replaceAction) long long ACTION_REPLACE;

+ (id)_dataFromInput:(id)a0;

- (id)parse:(id)a0;
- (id)parseWithContext:(id)a0 :(id)a1 :(long long)a2;

@end

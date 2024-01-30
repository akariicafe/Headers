@class NSString;

@interface SUScriptAction : SUScriptObject <NSCopying> {
    NSString *_actionType;
}

@property (copy) NSString *actionType;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)_className;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeKeys;
- (void)performAction;
- (void)dealloc;
- (id)initWithActionType:(id)a0;
- (id)scriptAttributeKeys;

@end

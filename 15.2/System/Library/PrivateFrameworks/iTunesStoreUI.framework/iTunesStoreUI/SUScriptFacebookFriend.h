@class NSString, NSDictionary;

@interface SUScriptFacebookFriend : SUScriptObject {
    NSDictionary *_dictionary;
}

@property (readonly) NSString *identifier;
@property (readonly) NSString *name;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)_className;
- (id)initWithName:(id)a0;
- (id)attributeKeys;
- (void)dealloc;
- (id)scriptAttributeKeys;
- (id)initWithFriendDictionary:(id)a0;

@end

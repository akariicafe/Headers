@class NSString;

@interface SUScriptMenuItem : SUScriptObject {
    BOOL _enabled;
    NSString *_title;
    id _userInfo;
}

@property BOOL enabled;
@property (retain) NSString *title;
@property (retain) id userInfo;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)init;
- (void)dealloc;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)_sendDidChange;

@end

@class NSString, SUScriptViewController;

@interface SUScriptSection : SUScriptObject {
    NSString *_badgeValue;
    NSString *_identifier;
    BOOL _transient;
    SUScriptViewController *_viewController;
}

@property (retain) NSString *badgeValue;
@property (readonly) NSString *identifier;
@property (readonly) BOOL transient;
@property (readonly) SUScriptViewController *viewController;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)_className;
- (id)attributeKeys;
- (void)dealloc;
- (id)scriptAttributeKeys;
- (void)setBadgeValue:(id)a0 animated:(BOOL)a1 blink:(BOOL)a2;
- (id)initWithNativeSection:(id)a0;

@end

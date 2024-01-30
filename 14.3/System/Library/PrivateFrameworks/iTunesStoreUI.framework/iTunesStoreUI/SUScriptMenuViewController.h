@class NSString, SUScriptFunction, NSNumber, WebScriptObject;

@interface SUScriptMenuViewController : SUScriptViewController {
    SUScriptFunction *_action;
}

@property (retain) WebScriptObject *action;
@property (retain) id items;
@property (retain) NSNumber *selectedIndex;
@property (retain) NSString *title;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)_viewController;
- (void)dealloc;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)newNativeViewController;
- (id)itemWithTitle:(id)a0 userInfo:(id)a1;

@end

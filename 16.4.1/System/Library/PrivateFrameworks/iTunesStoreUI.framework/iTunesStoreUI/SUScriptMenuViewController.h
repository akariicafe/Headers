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
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)itemWithTitle:(id)a0 userInfo:(id)a1;
- (id)newNativeViewController;

@end

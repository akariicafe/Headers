@class UIMenuElement, NSString;

@interface _UIKeyShortcutHUDMenuElement : NSObject

@property (readonly, nonatomic) UIMenuElement *uiMenuElement;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;

+ (id)elementWithUIMenuElement:(id)a0;

- (void)_acceptMenuVisit:(id /* block */)a0 shortcutVisit:(id /* block */)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

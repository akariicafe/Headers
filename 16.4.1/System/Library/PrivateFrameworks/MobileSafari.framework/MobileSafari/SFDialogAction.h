@class NSString;

@interface SFDialogAction : NSObject {
    id /* block */ _customAction;
}

@property (readonly, nonatomic) long long activatingKeyboardShortcut;
@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasCustomAction;
@property (readonly, nonatomic) BOOL isPreferredAction;

+ (id)actionWithTitle:(id)a0 activatingKeyboardShortcut:(long long)a1 type:(long long)a2;
+ (id)actionWithTitle:(id)a0 activatingKeyboardShortcut:(long long)a1 type:(long long)a2 isPreferredAction:(BOOL)a3;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 activatingKeyboardShortcut:(long long)a1 type:(long long)a2 isPreferredAction:(BOOL)a3;
- (void)setCustomAction:(id /* block */)a0;
- (void)triggerCustomAction;

@end

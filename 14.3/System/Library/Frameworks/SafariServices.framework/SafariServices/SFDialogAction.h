@class NSString;

@interface SFDialogAction : NSObject {
    id /* block */ _customAction;
}

@property (readonly, nonatomic) long long activatingKeyboardShortcut;
@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasCustomAction;

+ (id)actionWithTitle:(id)a0 activatingKeyboardShortcut:(long long)a1 type:(long long)a2;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 activatingKeyboardShortcut:(long long)a1 type:(long long)a2;
- (void)triggerCustomAction;
- (void)setCustomAction:(id /* block */)a0;

@end

@class NSString;

@interface UNTextInputNotificationAction : UNNotificationAction

@property (readonly, copy, nonatomic) NSString *textInputButtonTitle;
@property (readonly, copy, nonatomic) NSString *textInputPlaceholder;

+ (id)actionWithIdentifier:(id)a0 title:(id)a1 options:(unsigned long long)a2 icon:(id)a3 textInputButtonTitle:(id)a4 textInputPlaceholder:(id)a5;
+ (id)actionWithIdentifier:(id)a0 title:(id)a1 options:(unsigned long long)a2 textInputButtonTitle:(id)a3 textInputPlaceholder:(id)a4;

- (BOOL)isEqual:(id)a0;
- (id)description;

@end

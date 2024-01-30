@class UIEvent;

@interface _UIKeyShortcutHUDConfiguration : NSObject

@property (nonatomic, getter=isSearching) BOOL searching;
@property (nonatomic) long long shortcutType;
@property (retain, nonatomic) UIEvent *event;

- (void).cxx_destruct;

@end

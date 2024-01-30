@class NSString;

@interface WBSWebExtensionCommandShortcutConflict : NSObject

@property (readonly, copy, nonatomic) NSString *shortcut;
@property (readonly, copy, nonatomic) NSString *extensionDisplayName;
@property (readonly, copy, nonatomic) NSString *extensionDisplayShortName;

- (id)description;
- (void).cxx_destruct;
- (id)initWithShortcut:(id)a0 extensionDisplayName:(id)a1 extensionDisplayShortName:(id)a2;

@end

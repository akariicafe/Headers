@class _VOSProfileMode, NSMutableSet, VOSCommand;

@interface _VOSProfileCommand : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VOSCommand *command;
@property (retain, nonatomic) NSMutableSet *gestures;
@property (retain, nonatomic) NSMutableSet *keyboardShortcuts;
@property (retain, nonatomic) NSMutableSet *quickNavShortcuts;
@property (retain, nonatomic) NSMutableSet *slaveCommands;
@property (weak, nonatomic) _VOSProfileMode *mode;
@property (readonly, nonatomic) BOOL hasSlaveCommands;

+ (id)profileCommandWithCommand:(id)a0;
+ (id)profileCommandWithStringValue:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithCommand:(id)a0 gestures:(id)a1 keyboardShortcuts:(id)a2 quickNavShortcuts:(id)a3 slaveCommands:(id)a4;
- (void)addGesture:(id)a0;
- (void)removeGesture:(id)a0;
- (id)profileGestureForGesture:(id)a0;
- (void)addKeyboardShortcut:(id)a0;
- (void)removeKeyboardShortcut:(id)a0;
- (id)profileKeyboardShortcutForKeyChord:(id)a0;
- (void)addQuickNavShortcut:(id)a0;
- (void)removeQuickNavShortcut:(id)a0;
- (id)profileQuickNavShortcutForKeyChord:(id)a0;
- (void)addSlaveCommand:(id)a0;
- (void)removeSlaveCommand:(id)a0;
- (id)slaveCommandsForPressCount:(long long)a0;

@end

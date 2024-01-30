@interface MCKeyboardState : NSObject <NSCopying>

@property (readonly, nonatomic) long long userInterfaceIdiom;
@property (readonly, nonatomic) BOOL isSplitKeyboard;
@property (readonly, nonatomic) BOOL isHardwareKeyboard;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUserInterfaceIdiom:(long long)a0 isSplitKeyboard:(BOOL)a1 isHardwareKeyboard:(BOOL)a2;

@end

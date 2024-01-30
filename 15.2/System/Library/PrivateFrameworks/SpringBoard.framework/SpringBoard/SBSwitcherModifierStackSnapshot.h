@class NSString, SBSwitcherModifierQuerySnapshot, NSArray;

@interface SBSwitcherModifierStackSnapshot : NSObject

@property (retain, nonatomic) NSString *modifierName;
@property (retain, nonatomic) SBSwitcherModifierQuerySnapshot *querySnapshot;
@property (retain, nonatomic) NSArray *childSnapshots;

- (void).cxx_destruct;
- (unsigned long long)countOfAllChildSnapshots;
- (void)enumerateModifierSnapshots:(id /* block */)a0;
- (void)_enumerateModifierSnapshots:(id /* block */)a0 stop:(BOOL *)a1;

@end

@class NSString, NSArray;

@interface SCROPendingBrailleModifierPair : SCROPendingBrailleEdit

@property (readonly, nonatomic) NSString *pendingBraille;
@property (readonly, nonatomic) NSArray *modifiers;

- (void).cxx_destruct;
- (id)initWithPendingBraille:(id)a0 modifiers:(id)a1;

@end

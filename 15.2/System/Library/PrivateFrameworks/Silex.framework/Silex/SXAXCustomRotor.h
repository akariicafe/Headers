@class NSOrderedSet;

@interface SXAXCustomRotor : UIAccessibilityCustomRotor

@property (copy, nonatomic) NSOrderedSet *rotorItems;

+ (id)rotorWithName:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)rotorItemBefore:(id)a0;
- (id)rotorItemAfter:(id)a0;
- (long long)indexOfRotorItem:(id)a0;

@end

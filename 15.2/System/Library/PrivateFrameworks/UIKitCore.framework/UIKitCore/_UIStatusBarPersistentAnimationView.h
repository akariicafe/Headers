@class NSArray, NSHashTable;

@interface _UIStatusBarPersistentAnimationView : UIView

@property (retain, nonatomic) NSHashTable *animations;
@property (copy, nonatomic) NSArray *persistentAnimations;

- (void).cxx_destruct;
- (id)actionForLayer:(id)a0 forKey:(id)a1;

@end

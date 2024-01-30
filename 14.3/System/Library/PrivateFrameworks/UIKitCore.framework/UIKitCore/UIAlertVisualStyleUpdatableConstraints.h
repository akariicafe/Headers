@class NSMutableDictionary;

@interface UIAlertVisualStyleUpdatableConstraints : NSObject {
    NSMutableDictionary *_constraintsByKey;
}

- (id)init;
- (void).cxx_destruct;
- (void)addConstraint:(id)a0 forKey:(id)a1;
- (BOOL)hasUpdatableConstraints;
- (id)constraintForKey:(id)a0;

@end

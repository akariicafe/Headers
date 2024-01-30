@class NSMutableDictionary;

@interface UIAlertVisualStyleUpdatableConstraints : NSObject {
    NSMutableDictionary *_constraintsByKey;
}

- (void)addConstraint:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasUpdatableConstraints;
- (id)constraintForKey:(id)a0;

@end

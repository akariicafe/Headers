@interface CLSInputClue : CLSClue

@property BOOL needsPreparation;

- (id)init;
- (void)_prepareWithProgressBlock:(id /* block */)a0;
- (void)prepareIfNeeded;

@end

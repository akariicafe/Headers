@interface CLSInputClue : CLSClue

@property BOOL needsPreparation;

- (id)init;
- (void)prepareIfNeeded;
- (void)_prepareWithProgressBlock:(id /* block */)a0;

@end

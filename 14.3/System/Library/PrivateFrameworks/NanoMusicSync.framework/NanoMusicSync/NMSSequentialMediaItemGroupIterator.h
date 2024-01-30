@interface NMSSequentialMediaItemGroupIterator : NMSMediaItemGroupIterator

- (unsigned long long)iteratingOrder;
- (void)markAllRemainingContainersAsSkipped;
- (void)_continueToNextIdentifier;
- (void)_continueToNextContainer;

@end

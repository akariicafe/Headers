@interface NMSAlternatingMediaItemGroupIterator : NMSMediaItemGroupIterator {
    unsigned long long _maxItemListSize;
}

- (unsigned long long)iteratingOrder;
- (void)markAllRemainingContainersAsSkipped;
- (void)resetToIterateOverQuotaIdentifiers;
- (void)_generateItemListAndSizesDictIfNecessary;
- (void)_continueToNextIdentifier;
- (void)_continueToNextContainer;
- (void)_resetMaxItemListSize;

@end

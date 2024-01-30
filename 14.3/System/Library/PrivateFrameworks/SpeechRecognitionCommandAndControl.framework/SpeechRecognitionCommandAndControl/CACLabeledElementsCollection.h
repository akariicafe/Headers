@class NSArray, NSMutableDictionary, NSMutableArray;

@interface CACLabeledElementsCollection : NSObject <NSCopying> {
    NSMutableDictionary *_cachedElementsByTitle;
    NSMutableDictionary *_cachedElementsByTrait;
    NSMutableArray *_cachedElementsSorted;
    double _currentCollectionTransactionID;
}

@property (retain) NSArray *axElements;
@property (readonly) double cachedCollectionTransactionID;
@property (readonly) double finishedTime;
@property BOOL areElementsNumbered;

+ (id)labeledElementsFromTextMarkerRanges:(id)a0 axElement:(id)a1;

- (unsigned long long)collectionCount;
- (BOOL)isEmpty;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithCollection:(id)a0;
- (void)updateWithAXElements:(id)a0;
- (id)copyTableOfCollectedElementsByTitle;
- (id)collectedElements;
- (id)collectedElementsWithTitle:(id)a0;
- (id)collectedElementsWithTrait:(unsigned long long)a0;
- (BOOL)isCollecting;
- (id)copyTableOfCollectedElementsByTrait;
- (id)copyListOfCollectedElementsSorted;
- (void)cancelCollecting;
- (void)addLabeledElementWithItemElement:(id)a0 elementsByTitle:(id)a1 elementsByTrait:(id)a2 elementsSorted:(id)a3;
- (id)_keyFromTrait:(unsigned long long)a0;
- (void)flushCollection;
- (id)newlyCollectedElements;
- (void)resetCollectedFlagForAllElements;

@end

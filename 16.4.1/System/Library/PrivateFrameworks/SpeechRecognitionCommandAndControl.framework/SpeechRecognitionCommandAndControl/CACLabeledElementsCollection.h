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

- (BOOL)isEmpty;
- (id)_initWithCollection:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)collectionCount;
- (BOOL)isCollecting;
- (void)flushCollection;
- (id)_keyFromTrait:(unsigned long long)a0;
- (void)addLabeledElementWithItemElement:(id)a0 elementsByTitle:(id)a1 elementsByTrait:(id)a2 elementsSorted:(id)a3;
- (void)cancelCollecting;
- (id)collectedElements;
- (id)collectedElementsWithTitle:(id)a0;
- (id)collectedElementsWithTrait:(unsigned long long)a0;
- (id)copyListOfCollectedElementsSorted;
- (id)copyTableOfCollectedElementsByTitle;
- (id)copyTableOfCollectedElementsByTrait;
- (id)newlyCollectedElements;
- (void)resetCollectedFlagForAllElements;
- (void)updateWithAXElements:(id)a0;

@end

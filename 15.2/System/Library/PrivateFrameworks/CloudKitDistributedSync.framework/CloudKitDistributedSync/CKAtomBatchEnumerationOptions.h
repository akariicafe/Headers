@class NSIndexSet, CKAtomLocation;

@interface CKAtomBatchEnumerationOptions : NSObject

@property (retain, nonatomic) NSIndexSet *includedIndexes;
@property (retain, nonatomic) CKAtomLocation *includedLocation;

- (void).cxx_destruct;
- (id)initWithIncludedIndexes:(id)a0;
- (id)initWithIncludedLocation:(id)a0;

@end

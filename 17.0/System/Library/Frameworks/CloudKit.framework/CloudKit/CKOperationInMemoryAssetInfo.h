@class NSMutableData, NSMutableIndexSet;

@interface CKOperationInMemoryAssetInfo : NSObject

@property (retain, nonatomic) NSMutableData *assetContent;
@property (retain, nonatomic) NSMutableIndexSet *byteRanges;

- (id)init;
- (BOOL)isContiguous;
- (void).cxx_destruct;
- (id)assetContentWithExpectedSignature:(id)a0 error:(id *)a1;
- (void)writeData:(id)a0 atOffset:(unsigned long long)a1;

@end

@class NSMutableData, NSMutableIndexSet;

@interface CKOperationInMemoryAssetInfo : NSObject

@property (retain, nonatomic) NSMutableData *assetContent;
@property (retain, nonatomic) NSMutableIndexSet *byteRanges;

- (id)init;
- (void).cxx_destruct;
- (void)writeData:(id)a0 atOffset:(unsigned long long)a1;
- (BOOL)isContiguous;
- (id)assetContentWithError:(id *)a0 expectedSignature:(id)a1;

@end

@class NSMutableData, NSMutableIndexSet;

@interface CKOperationInMemoryAssetInfo : NSObject

@property (retain, nonatomic) NSMutableData *assetContent;
@property (retain, nonatomic) NSMutableIndexSet *byteRanges;

- (BOOL)isContiguous;
- (void).cxx_destruct;
- (id)init;
- (void)writeData:(id)a0 atOffset:(unsigned long long)a1;
- (id)assetContentWithError:(id *)a0 expectedSignature:(id)a1;

@end

@interface AVFileProcessor : NSObject {
    float _percentComplete;
    id /* block */ _progressBlock;
}

+ (id)fileProcessor;

- (void)dealloc;
- (id)processPurchasedItem:(id)a0 withAttributes:(id)a1 resultInfo:(id *)a2 progressBlock:(id /* block */)a3;
- (id)rentalInfo:(id)a0;
- (id)processPurchasedItem:(id)a0 withAttributes:(id)a1;
- (id)processPurchasedItem:(id)a0 withAttributes:(id)a1 progressBlock:(id /* block */)a2;
- (id)processPurchasedItem:(id)a0 withAttributes:(id)a1 resultInfo:(id *)a2;
- (id)sinfInfoFromFilePath:(id)a0;
- (id)sinfsFromFilePath:(id)a0;

@end

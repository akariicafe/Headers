@class NSMutableArray;

@interface MFDataHolder : NSObject {
    NSMutableArray *_datas;
}

@property (readonly, nonatomic) unsigned long long length;

+ (id)dataHolderWithData:(id)a0;
+ (id)dataHolder;

- (void)enumerateByteRangesUsingBlock:(id /* block */)a0;
- (void)addData:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)data;
- (unsigned long long)numberOfNewlinesNeedingConversion:(BOOL)a0;
- (void)enumerateConvertingNewlinesUsingBlock:(id /* block */)a0;
- (void)enumerateDatasUsingBlock:(id /* block */)a0;

@end

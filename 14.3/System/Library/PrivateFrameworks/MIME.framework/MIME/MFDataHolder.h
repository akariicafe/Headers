@class NSMutableArray;

@interface MFDataHolder : NSObject {
    NSMutableArray *_datas;
}

@property (readonly, nonatomic) unsigned long long length;

+ (id)dataHolderWithData:(id)a0;
+ (id)dataHolder;

- (id)init;
- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)a0;
- (void)addData:(id)a0;
- (void)enumerateByteRangesUsingBlock:(id /* block */)a0;
- (unsigned long long)numberOfNewlinesNeedingConversion:(BOOL)a0;
- (void)enumerateConvertingNewlinesUsingBlock:(id /* block */)a0;
- (void)enumerateDatasUsingBlock:(id /* block */)a0;

@end

@class NSMutableArray;

@interface _PASPosixDataCollector : NSObject {
    NSMutableArray *_chunks;
    unsigned long long _totalBytes;
}

@property (readonly, nonatomic) id /* block */ handleData;

- (void).cxx_destruct;
- (id)allData;

@end

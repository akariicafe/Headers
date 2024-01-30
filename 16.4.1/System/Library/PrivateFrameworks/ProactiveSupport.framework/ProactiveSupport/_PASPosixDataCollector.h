@class NSMutableArray;

@interface _PASPosixDataCollector : NSObject {
    NSMutableArray *_chunks;
    unsigned long long _totalBytes;
}

@property (readonly, nonatomic) id /* block */ handleData;

- (id)allData;
- (void).cxx_destruct;

@end

@class NSArray, NSMutableArray;

@interface TextResults : NSObject

@property (retain, nonatomic) NSMutableArray *mutableCols;
@property (retain, nonatomic) NSArray *cols;
@property (readonly) unsigned long long colCount;

- (void)addColumn:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)sortCols;
- (id)transcriptionOfPath:(id)a0 tokenProcessingBlock:(id /* block */)a1;

@end

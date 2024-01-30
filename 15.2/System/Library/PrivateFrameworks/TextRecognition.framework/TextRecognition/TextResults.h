@class NSArray, NSMutableArray;

@interface TextResults : NSObject

@property (retain, nonatomic) NSMutableArray *mutableCols;
@property (retain, nonatomic) NSArray *cols;
@property (readonly) unsigned long long colCount;

- (void).cxx_destruct;
- (id)init;
- (void)addColumn:(id)a0;
- (void)sortCols;
- (id)transcriptionOfPath:(id)a0 tokenProcessingBlock:(id /* block */)a1;

@end

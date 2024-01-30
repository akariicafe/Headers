@class NSData, NSMutableArray, NSFileHandle;

@interface DSTextFile : NSObject <DSTextFileEnumeratorControl>

@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (nonatomic) unsigned long long bufferSize;
@property (retain, nonatomic) NSMutableArray *linePositions;
@property (retain, nonatomic) NSData *lineBreak;
@property (nonatomic) BOOL cancelEnumeration;
@property (nonatomic) long long skipCount;
@property (nonatomic) BOOL isEnumerating;
@property (nonatomic) unsigned long long currentLineIndex;

+ (id)textFileWithPath:(id)a0;

- (id)readDataOfLength:(unsigned long long)a0;
- (void)end;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0;
- (void)seekToOffset:(unsigned long long)a0;
- (unsigned long long)currentOffset;
- (id)initWithFilePath:(id)a0 withBufferSize:(unsigned long long)a1;
- (BOOL)advanceToNextLine:(id *)a0;
- (void)resetEnumerator;
- (unsigned long long)getOffsetAtLineIndex:(unsigned long long)a0;
- (id)extractLine:(unsigned long long)a0;
- (BOOL)searchForNextLineFromCurrentPosition:(id *)a0;
- (void)skipWithLines:(long long)a0;
- (void)enumerateUsingBlock:(id /* block */)a0;
- (void)seekToBeginning;

@end

@class DERewindableReader, NSMutableData, NSData;

@interface DEMultipartReader : NSObject <DEReader>

@property (retain, nonatomic) DERewindableReader *reader;
@property (retain, nonatomic) NSMutableData *searchBuffer;
@property (retain, nonatomic) NSData *nextPartData;
@property (nonatomic) BOOL endOfPart;
@property (nonatomic) BOOL endOfMessage;
@property (retain, nonatomic) NSData *endOfPartData;
@property (retain, nonatomic) NSData *endOfMessageData;
@property (nonatomic) unsigned long long maxEndSize;

+ (id)getEndOfPartData;
+ (id)getEndOfMessageData;

- (id)readDataOfLength:(unsigned long long)a0;
- (void)close;
- (void).cxx_destruct;
- (id)init;
- (BOOL)nextPart;
- (void)dealloc;
- (id)readData;
- (id)initWithReader:(id)a0;
- (unsigned long long)getAvailableLength;
- (void)searchForEnd;
- (id)internalReadDataOfLength:(unsigned long long)a0;

@end

@class NSMutableData, NSMutableArray;

@interface ASWBXMLToXMLConverter : NSObject {
    unsigned char _buffer[16384];
}

@property (nonatomic) char *bytesToConsumeVector;
@property (nonatomic) unsigned long long bytesToConsumeCount;
@property (nonatomic) char *bytesToConsumeEnd;
@property (nonatomic) long long maxInlineStringLength;
@property (nonatomic) BOOL done;
@property (nonatomic) int state;
@property (nonatomic) int wbxmlState;
@property (nonatomic) int currentCodePage;
@property (retain, nonatomic) NSMutableArray *codePageStack;
@property (retain, nonatomic) NSMutableArray *endTagStack;
@property (retain, nonatomic) NSMutableData *stringAccumulator;
@property (nonatomic) unsigned long long overflowLength;
@property (nonatomic) unsigned int opaqueDataLength;
@property (nonatomic) int ppstate;
@property (nonatomic) BOOL oldFormat;
@property (nonatomic) BOOL useMetadata;
@property (nonatomic) BOOL compact;

- (void).cxx_destruct;
- (void)handleBytesAvailable;
- (void)_consumeBytes;
- (void)_resetWBXMLParser;
- (id)initUsingMetadata:(BOOL)a0;
- (void)outputData:(id)a0;
- (void)outputString:(id)a0;
- (long long)readFromInput;
- (char *)writableBufferPtr;
- (long long)writableBufferSize;

@end

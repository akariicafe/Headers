@class ICSPushbackStream, NSMutableData;

@interface ICSTokenizer : NSObject {
    ICSPushbackStream *_data;
    NSMutableData *_token;
    int _tokenType;
    int _expectedNextTokenType;
}

@property BOOL printedICS;
@property int logCount;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (int)tokenType;
- (id)currentToken;
- (id)nextToken;
- (id)initWithCompressedData:(id)a0;
- (BOOL)consumeEOL;
- (void)consumeWhiteSpace;
- (BOOL)consumeChar:(char)a0;
- (BOOL)consumeEscaped:(const char *)a0;
- (void)consumePropName;
- (void)consumeParamName;
- (void)consumeParamValue;
- (void)consumePropValue;

@end

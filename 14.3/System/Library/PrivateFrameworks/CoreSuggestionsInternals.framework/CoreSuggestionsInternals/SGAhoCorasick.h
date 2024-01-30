@class NSData;

@interface SGAhoCorasick : NSObject {
    NSData *_bytecode;
    unsigned short _endPtr;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithBytecode:(id)a0;
- (BOOL)existsInString:(id)a0;

@end

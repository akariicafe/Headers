@class NSData;

@interface SGAhoCorasick : NSObject {
    NSData *_bytecode;
    unsigned short _endPtr;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithBytecode:(id)a0;
- (BOOL)existsInString:(id)a0;

@end

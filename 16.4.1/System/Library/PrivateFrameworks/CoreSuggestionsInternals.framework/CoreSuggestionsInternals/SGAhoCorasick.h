@class NSData;

@interface SGAhoCorasick : NSObject {
    NSData *_bytecode;
    unsigned short _endPtr;
}

- (id)initWithBytecode:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)existsInString:(id)a0;

@end

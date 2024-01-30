@class NSObject;
@protocol DEWriter;

@interface DECryptor : NSObject <DEWriter>

@property (retain, nonatomic) NSObject<DEWriter> *writer;
@property (nonatomic) struct _CCCryptor { } *cryptor;
@property (nonatomic) unsigned int operation;

- (void)writeData:(id)a0;
- (void)dealloc;
- (void)close;
- (id)init;
- (void).cxx_destruct;
- (id)initWithWriter:(id)a0 operation:(unsigned int)a1 key:(id)a2 iv:(id)a3;

@end

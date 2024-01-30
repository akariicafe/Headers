@class NSObject;
@protocol DEWriter;

@interface DECryptor : NSObject <DEWriter>

@property (retain, nonatomic) NSObject<DEWriter> *writer;
@property (nonatomic) struct _CCCryptor { } *cryptor;
@property (nonatomic) unsigned int operation;

- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)dealloc;
- (void)writeData:(id)a0;
- (id)initWithWriter:(id)a0 operation:(unsigned int)a1 key:(id)a2 iv:(id)a3;

@end

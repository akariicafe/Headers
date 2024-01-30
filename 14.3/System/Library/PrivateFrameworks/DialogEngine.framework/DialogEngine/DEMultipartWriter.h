@class NSObject;
@protocol DEWriter;

@interface DEMultipartWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSObject<DEWriter> *writer;
@property (nonatomic) BOOL partClosed;

- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)dealloc;
- (void)closeMessage;
- (void)writeData:(id)a0;
- (id)initWithWriter:(id)a0;
- (void)newPart;

@end

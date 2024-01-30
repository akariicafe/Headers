@class NSObject;
@protocol DEWriter;

@interface DEMultipartWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSObject<DEWriter> *writer;
@property (nonatomic) BOOL partClosed;

- (void)writeData:(id)a0;
- (void)close;
- (void)newPart;
- (void).cxx_destruct;
- (id)initWithWriter:(id)a0;
- (id)init;
- (void)dealloc;
- (void)closeMessage;

@end

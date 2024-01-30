@class NSArray, NSMutableData;

@interface DEMultiWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSArray *writers;
@property (retain, nonatomic) NSMutableData *data;

- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)writeData:(id)a0;
- (id)initWithWriters:(id)a0;

@end

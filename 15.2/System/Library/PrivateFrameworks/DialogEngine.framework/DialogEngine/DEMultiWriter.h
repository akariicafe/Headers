@class NSArray, NSMutableData;

@interface DEMultiWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSArray *writers;
@property (retain, nonatomic) NSMutableData *data;

- (void)writeData:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (id)init;
- (id)initWithWriters:(id)a0;

@end

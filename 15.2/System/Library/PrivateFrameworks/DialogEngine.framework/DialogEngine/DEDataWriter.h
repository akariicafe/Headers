@class NSMutableData;

@interface DEDataWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSMutableData *data;

- (void)writeData:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (id)init;

@end

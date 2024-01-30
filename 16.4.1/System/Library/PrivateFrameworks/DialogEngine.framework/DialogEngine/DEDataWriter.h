@class NSMutableData;

@interface DEDataWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSMutableData *data;

- (void)writeData:(id)a0;
- (void)close;
- (id)init;
- (void).cxx_destruct;

@end

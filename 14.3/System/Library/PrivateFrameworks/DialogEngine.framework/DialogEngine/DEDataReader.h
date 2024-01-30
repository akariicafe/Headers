@class NSData;

@interface DEDataReader : NSObject <DEReader>

@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long dataOffset;

- (id)readDataOfLength:(unsigned long long)a0;
- (id)init;
- (void)close;
- (void).cxx_destruct;
- (id)readData;
- (id)initWithData:(id)a0;

@end

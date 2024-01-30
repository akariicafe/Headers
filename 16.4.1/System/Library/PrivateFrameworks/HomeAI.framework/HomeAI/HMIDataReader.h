@class NSData;

@interface HMIDataReader : NSObject {
    NSData *_data;
    unsigned long long _position;
}

- (id)initWithData:(id)a0;
- (unsigned long long)position;
- (unsigned long long)readUInt64;
- (unsigned long long)length;
- (unsigned int)readUInt32;
- (void).cxx_destruct;
- (id)readData:(unsigned long long)a0;
- (void)seek:(unsigned long long)a0;

@end

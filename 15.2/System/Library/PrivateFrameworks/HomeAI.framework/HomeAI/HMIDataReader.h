@class NSData;

@interface HMIDataReader : NSObject {
    NSData *_data;
    unsigned long long _position;
}

- (unsigned long long)position;
- (unsigned long long)length;
- (unsigned int)readUInt32;
- (void)seek:(unsigned long long)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)readData:(unsigned long long)a0;
- (unsigned long long)readUInt64;

@end

@class NSMutableData;

@interface GEONetworkDataReader : NSObject {
    NSMutableData *_data;
    unsigned long long _dataLength;
    const void *_bytes;
    unsigned long long _bookmarkOffset;
    unsigned long long _offset;
}

- (void).cxx_destruct;
- (id)readString;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)allData;
- (id)readData:(unsigned int)a0;
- (BOOL)readUnsignedShort:(unsigned short *)a0;
- (void)appendNetworkData:(id)a0;
- (BOOL)readUnsignedInt:(unsigned int *)a0;
- (void)seekToMarkedOffset;
- (BOOL)hasUnreadData;
- (void)markOffset;

@end

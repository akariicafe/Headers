@class NSMutableData;

@interface GEONetworkDataReader : NSObject {
    NSMutableData *_data;
    unsigned long long _dataLength;
    const void *_bytes;
    unsigned long long _bookmarkOffset;
    unsigned long long _offset;
}

- (id)initWithData:(id)a0;
- (BOOL)readUnsignedShort:(unsigned short *)a0;
- (void)appendNetworkData:(id)a0;
- (BOOL)readUnsignedInt:(unsigned int *)a0;
- (void)seekToMarkedOffset;
- (BOOL)hasUnreadData;
- (id)allData;
- (void).cxx_destruct;
- (id)readData:(unsigned int)a0;
- (void)markOffset;
- (void)dealloc;
- (id)readString;

@end

@class NSData;

@interface CTKClientSEP_TKDataSource : NSObject {
    NSData *_data;
}

@property (readonly) const char *ptr;
@property (readonly) const char *end;
@property (readonly) NSData *data;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (BOOL)bytesSafeToRead:(long long)a0;
- (id)fetchDataWithLength:(long long)a0;
- (unsigned char)fetchByte;

@end

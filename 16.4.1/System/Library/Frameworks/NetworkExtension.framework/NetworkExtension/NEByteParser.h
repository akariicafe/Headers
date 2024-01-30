@class NSData;

@interface NEByteParser : NSObject <NSCopying> {
    unsigned long long _offset;
    NSData *_data;
    const char *_bytes;
    const char *_cursor;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end

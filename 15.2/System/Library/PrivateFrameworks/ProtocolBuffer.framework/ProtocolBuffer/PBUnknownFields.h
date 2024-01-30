@interface PBUnknownFields : NSObject {
    char *_buf;
    unsigned long long _bufSpace;
    unsigned long long _bufLen;
    unsigned long long _recursionDepth;
}

- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end

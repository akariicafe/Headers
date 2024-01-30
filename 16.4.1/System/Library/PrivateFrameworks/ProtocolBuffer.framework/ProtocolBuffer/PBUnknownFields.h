@interface PBUnknownFields : NSObject {
    char *_buf;
    unsigned long long _bufSpace;
    unsigned long long _bufLen;
    unsigned long long _recursionDepth;
}

- (id)dictionaryRepresentation;
- (void)dealloc;
- (void)writeTo:(id)a0;
- (id)description;

@end

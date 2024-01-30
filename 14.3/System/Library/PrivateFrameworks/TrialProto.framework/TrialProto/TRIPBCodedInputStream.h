@class NSData;

@interface TRIPBCodedInputStream : NSObject {
    struct TRIPBCodedInputStreamState { char *bytes; unsigned long long bufferSize; unsigned long long bufferPos; unsigned long long currentLimit; int lastTag; unsigned long long recursionDepth; } state_;
    NSData *buffer_;
}

+ (id)streamWithData:(id)a0;

- (unsigned long long)position;
- (long long)readSInt64;
- (BOOL)skipField:(int)a0;
- (int)readInt32;
- (void)skipMessage;
- (id)readString;
- (double)readDouble;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (int)readSInt32;
- (id)readBytes;
- (unsigned long long)readFixed64;
- (void)readGroup:(int)a0 message:(id)a1 extensionRegistry:(id)a2;
- (int)readTag;
- (unsigned long long)readUInt64;
- (float)readFloat;
- (BOOL)isAtEnd;
- (long long)readInt64;
- (void)checkLastTagWas:(int)a0;
- (unsigned int)readFixed32;
- (unsigned int)readUInt32;
- (long long)readSFixed64;
- (int)readEnum;
- (unsigned long long)pushLimit:(unsigned long long)a0;
- (void)readMessage:(id)a0 extensionRegistry:(id)a1;
- (void)popLimit:(unsigned long long)a0;
- (int)readSFixed32;
- (void)readUnknownGroup:(int)a0 message:(id)a1;
- (BOOL)readBool;
- (void)readMapEntry:(id)a0 extensionRegistry:(id)a1 field:(id)a2 parentMessage:(id)a3;

@end

@class NSData;

@interface TRIPBCodedInputStream : NSObject {
    struct TRIPBCodedInputStreamState { char *bytes; unsigned long long bufferSize; unsigned long long bufferPos; unsigned long long currentLimit; int lastTag; unsigned long long recursionDepth; } state_;
    NSData *buffer_;
}

+ (id)streamWithData:(id)a0;

- (unsigned long long)readFixed64;
- (unsigned long long)position;
- (long long)readInt64;
- (void)readMessage:(id)a0 extensionRegistry:(id)a1;
- (BOOL)isAtEnd;
- (void)readUnknownGroup:(int)a0 message:(id)a1;
- (void)skipMessage;
- (int)readTag;
- (unsigned int)readUInt32;
- (id)initWithData:(id)a0;
- (id)readBytes;
- (float)readFloat;
- (void)readMapEntry:(id)a0 extensionRegistry:(id)a1 field:(id)a2 parentMessage:(id)a3;
- (void)popLimit:(unsigned long long)a0;
- (unsigned int)readFixed32;
- (BOOL)skipField:(int)a0;
- (void)checkLastTagWas:(int)a0;
- (unsigned long long)pushLimit:(unsigned long long)a0;
- (long long)readSInt64;
- (double)readDouble;
- (BOOL)readBool;
- (void)dealloc;
- (unsigned long long)readUInt64;
- (int)readEnum;
- (id)readString;
- (void)readGroup:(int)a0 message:(id)a1 extensionRegistry:(id)a2;
- (int)readInt32;
- (int)readSInt32;
- (long long)readSFixed64;
- (int)readSFixed32;

@end

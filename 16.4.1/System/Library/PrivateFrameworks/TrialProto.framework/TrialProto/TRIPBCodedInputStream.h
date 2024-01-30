@class NSData;

@interface TRIPBCodedInputStream : NSObject {
    struct TRIPBCodedInputStreamState { char *bytes; unsigned long long bufferSize; unsigned long long bufferPos; unsigned long long currentLimit; int lastTag; unsigned long long recursionDepth; } state_;
    NSData *buffer_;
}

+ (id)streamWithData:(id)a0;

- (id)initWithData:(id)a0;
- (void)skipMessage;
- (void)checkLastTagWas:(int)a0;
- (int)readSFixed32;
- (int)readEnum;
- (long long)readSFixed64;
- (void)readGroup:(int)a0 message:(id)a1 extensionRegistry:(id)a2;
- (unsigned long long)position;
- (int)readSInt32;
- (void)readUnknownGroup:(int)a0 message:(id)a1;
- (double)readDouble;
- (unsigned long long)readUInt64;
- (id)readBytes;
- (long long)readInt64;
- (void)popLimit:(unsigned long long)a0;
- (float)readFloat;
- (void)dealloc;
- (int)readTag;
- (BOOL)skipField:(int)a0;
- (int)readInt32;
- (unsigned int)readFixed32;
- (BOOL)readBool;
- (void)readMapEntry:(id)a0 extensionRegistry:(id)a1 field:(id)a2 parentMessage:(id)a3;
- (unsigned int)readUInt32;
- (void)readMessage:(id)a0 extensionRegistry:(id)a1;
- (long long)readSInt64;
- (unsigned long long)readFixed64;
- (BOOL)isAtEnd;
- (id)readString;
- (unsigned long long)pushLimit:(unsigned long long)a0;

@end

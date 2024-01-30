@class NSData;

@interface NSSubrangeData : NSData {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSData *_data;
}

- (BOOL)_isCompact;
- (unsigned long long)length;
- (id)initWithData:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (const void *)bytes;
- (void)getBytes:(void *)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end

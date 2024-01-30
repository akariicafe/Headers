@class NSData;

@interface CoreUtilsNSSubrangeData : NSData {
    NSData *_data;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

- (const void *)bytes;
- (unsigned long long)length;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_isCompact;
- (id)initWithData:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)getBytes:(void *)a0;

@end

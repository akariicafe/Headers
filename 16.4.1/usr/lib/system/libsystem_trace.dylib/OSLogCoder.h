@interface OSLogCoder : NSObject <OSLogCoder> {
    struct { unsigned char x0 : 4; unsigned char x1 : 4; unsigned char x2; unsigned char x3[0]; } *_fmt_cmd;
    struct os_trace_blob_s { union { char *x0; void *x1; char *x2; char *x3; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; BOOL x5; } *_ob;
    struct os_trace_blob_s { union { char *x0; void *x1; char *x2; char *x3; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; BOOL x5; } *_ob_pub;
    struct os_trace_blob_s { union { char *x0; void *x1; char *x2; char *x3; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; BOOL x5; } *_ob_priv;
    unsigned char _privacy_level;
    struct os_trace_blob_s { union { char *ob_b; void *ob_v; char *ob_s; char *ob_c; } ; unsigned int ob_len; unsigned int ob_size; unsigned int ob_maxsize; unsigned short ob_flags; BOOL ob_binary; } _ob_mask;
    char _maskbuf[128];
    unsigned long long _maxsz;
    unsigned short _written;
    unsigned short _offset;
    BOOL _truncated;
    BOOL _initialized;
    BOOL _mask;
}

- (void)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)setPublic;
- (void)setTruncated;
- (void)_initBlob;

@end

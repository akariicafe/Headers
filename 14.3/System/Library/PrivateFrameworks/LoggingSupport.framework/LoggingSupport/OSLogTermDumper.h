@interface OSLogTermDumper : NSObject {
    struct os_trace_blob_s { union { char *ob_b; void *ob_v; char *ob_s; char *ob_c; } ; unsigned int ob_len; unsigned int ob_size; unsigned int ob_maxsize; unsigned short ob_flags; BOOL ob_binary; } _ob;
    unsigned short _last_attrs;
    unsigned char _ob_slop[1];
    int _fd;
    BOOL _vis;
}

@property (readonly, nonatomic) unsigned char colorMode;
@property (readonly, nonatomic) BOOL isFancy;
@property (nonatomic) unsigned short style;
@property (nonatomic, getter=isBold) BOOL bold;
@property (nonatomic, getter=isOblique) BOOL oblique;
@property (nonatomic, getter=isUnderlined) BOOL underline;
@property (nonatomic) unsigned char bgColor;
@property (nonatomic) unsigned char fgColor;

- (id)init;
- (void)close;
- (void)putc:(int)a0;
- (void)puts:(const char *)a0;
- (void)dealloc;
- (void)writeln;
- (unsigned int)format:(const char *)a0;
- (void)endEditing;
- (void)resetStyle;
- (id)initWithFd:(int)a0 colorMode:(unsigned char)a1;
- (void)startPager;
- (void)_flushAttrs;
- (void)_resetAttrsForNewline;
- (void)write:(const void *)a0 size:(unsigned long long)a1;
- (unsigned int)vformat:(const char *)a0 args:(char *)a1;
- (void)hexdump:(const void *)a0 length:(unsigned long long)a1;
- (void)pad:(int)a0 count:(unsigned long long)a1;
- (void)putUUID:(unsigned char[16])a0;
- (void)flush:(BOOL)a0;
- (void)beginEditing;

@end

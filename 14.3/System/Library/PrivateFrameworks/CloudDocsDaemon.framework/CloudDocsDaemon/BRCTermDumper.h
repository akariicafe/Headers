@interface BRCTermDumper : BRCDumper {
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_file;
    unsigned long long _termWidth;
    unsigned long long _usedTermWidth;
    int _curAttrs;
    int _curFg;
    int _curBg;
}

@property (readonly, nonatomic) BOOL isatty;
@property (readonly, nonatomic) BOOL supportsEscapeSequences;
@property (readonly, nonatomic) BOOL useColor;

+ (void)setupPagerForFd:(int)a0;
+ (void)execPagerOnFileFd:(int)a0;

- (void)put:(id)a0;
- (void)puts:(const char *)a0;
- (void)endLine;
- (void)write:(const char *)a0;
- (void)reset;
- (void)puts:(const char *)a0 len:(unsigned long long)a1;
- (void)cursorSave;
- (unsigned long long)_startInCString:(char[256])a0 fgColor:(int)a1 bgColor:(int)a2 attr:(int)a3;
- (id)startStringForFgColor:(int)a0 bgColor:(int)a1 attr:(int)a2;
- (void)cursorGotoLineStart;
- (void)startFgColor:(int)a0 bgColor:(int)a1 attr:(int)a2;
- (void)forgetRemainingSpace;
- (void)_putsAndCrop:(const char *)a0 len:(unsigned long long)a1;
- (id)stringForReset;
- (void)eraseEndOfLine;
- (void)eraseStartOfLine;
- (void)eraseScreenDown;
- (void)eraseScreenUp;
- (void)cursorRestore;
- (void)cursorDown:(unsigned int)a0;
- (void)cursorRight:(unsigned int)a0;
- (void)cursorLeft:(unsigned int)a0;
- (void)startNewLine;
- (unsigned long long)remainingSpace;
- (void)startPager;
- (id)initWithFd:(int)a0 forceColor:(BOOL)a1;
- (void)eraseLine;
- (void)cursorUp:(unsigned int)a0;

@end

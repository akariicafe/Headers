@interface FPCTLTermDumper : NSObject <NSSecureCoding> {
    unsigned long long _termWidth;
    unsigned long long _usedTermWidth;
    int _curAttrs;
    int _curFg;
    int _curBg;
    BOOL _eightBitColor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isatty;
@property (readonly, nonatomic) BOOL supportsEscapeSequences;
@property (readonly, nonatomic) BOOL useColor;
@property (readonly, nonatomic) int fd;

+ (void)setupPagerForFd:(int)a0;
+ (void)execPagerOnFileFd:(int)a0;

- (void)put:(id)a0;
- (void)puts:(const char *)a0;
- (void)endLine;
- (void)encodeWithCoder:(id)a0;
- (void)write:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (void)startPager;
- (id)initWithFd:(int)a0 forceColor:(BOOL)a1;
- (unsigned long long)_startInCString:(char[256])a0 fgColor:(int)a1 bgColor:(int)a2 attr:(int)a3;
- (id)startStringForFgColor:(int)a0 bgColor:(int)a1 attr:(int)a2;
- (void)startFgColor:(int)a0 bgColor:(int)a1 attr:(int)a2;
- (void)cursorGotoLineStart;
- (void)forgetRemainingSpace;
- (void)puts:(const char *)a0 len:(unsigned long long)a1;
- (void)_putsAndCrop:(const char *)a0 len:(unsigned long long)a1;
- (id)stringForReset;
- (void)eraseEndOfLine;
- (void)eraseStartOfLine;
- (void)eraseLine;
- (void)eraseScreenDown;
- (void)eraseScreenUp;
- (void)cursorSave;
- (void)cursorRestore;
- (void)cursorUp:(unsigned int)a0;
- (void)cursorDown:(unsigned int)a0;
- (void)cursorRight:(unsigned int)a0;
- (void)cursorLeft:(unsigned int)a0;
- (void)startNewLine;
- (unsigned long long)remainingSpace;
- (void)startFgColor:(int)a0 attr:(int)a1;
- (void)startBgColor:(int)a0 attr:(int)a1;
- (void)startFgColor:(int)a0;
- (void)startBgColor:(int)a0;
- (void)startAttributes:(int)a0;
- (void)changeFgColor:(int)a0;
- (void)changeBgColor:(int)a0;
- (void)changeAttributes:(int)a0;
- (void)dumpImage:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (void)dumpImage:(id)a0 characterWidth:(unsigned long long)a1 characterHeight:(unsigned long long)a2;
- (void)dumpProgress:(id)a0;
- (id)annotateString:(id)a0 markedIdentifiers:(id)a1;

@end

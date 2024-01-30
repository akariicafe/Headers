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

+ (void)execPagerOnFileFd:(int)a0;
+ (void)setupPagerForFd:(int)a0;

- (void)write:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)endLine;
- (void)reset;
- (void)put:(id)a0;
- (void)eraseScreenDown;
- (void)_putsAndCrop:(const char *)a0 len:(unsigned long long)a1;
- (unsigned long long)_startInCString:(char[256])a0 fgColor:(int)a1 bgColor:(int)a2 attr:(int)a3;
- (void)changeAttributes:(int)a0;
- (void)changeBgColor:(int)a0;
- (void)changeFgColor:(int)a0;
- (void)cursorDown:(unsigned int)a0;
- (void)cursorGotoLineStart;
- (void)cursorLeft:(unsigned int)a0;
- (void)cursorRestore;
- (void)cursorRight:(unsigned int)a0;
- (void)cursorSave;
- (void)cursorUp:(unsigned int)a0;
- (void)eraseEndOfLine;
- (void)eraseLine;
- (void)eraseScreenUp;
- (void)eraseStartOfLine;
- (void)forgetRemainingSpace;
- (id)initWithFd:(int)a0 forceColor:(BOOL)a1;
- (void)puts:(const char *)a0;
- (void)puts:(const char *)a0 len:(unsigned long long)a1;
- (unsigned long long)remainingSpace;
- (void)startAttributes:(int)a0;
- (void)startBgColor:(int)a0;
- (void)startBgColor:(int)a0 attr:(int)a1;
- (void)startFgColor:(int)a0;
- (void)startFgColor:(int)a0 attr:(int)a1;
- (void)startFgColor:(int)a0 bgColor:(int)a1 attr:(int)a2;
- (void)startNewLine;
- (void)startPager;
- (id)startStringForFgColor:(int)a0 bgColor:(int)a1 attr:(int)a2;
- (id)stringForReset;
- (id)annotateString:(id)a0 markedIdentifiers:(id)a1;
- (void)dumpImage:(id)a0 characterWidth:(unsigned long long)a1 characterHeight:(unsigned long long)a2;
- (void)dumpImage:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (void)dumpProgress:(id)a0;

@end

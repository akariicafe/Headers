@class NSIndexSet;

@interface SGPlainTextContentCursor : NSObject {
    NSIndexSet *_quoted;
    struct __CFString { } *_str;
    unsigned long long _len;
    struct { unsigned short buffer[64]; struct __CFString *theString; unsigned short *directUniCharBuffer; char *directCStringBuffer; struct { long long location; long long length; } rangeToBuffer; long long bufferedRangeStart; long long bufferedRangeEnd; } _ib;
}

@property (nonatomic) unsigned long long pos;

- (BOOL)forward;
- (BOOL)backward;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMailMessage:(id)a0;
- (BOOL)backwardToString:(id)a0 consume:(BOOL)a1;
- (void)backwardWhile:(id /* block */)a0;
- (BOOL)forwardToString:(id)a0 consume:(BOOL)a1;
- (void)forwardWhile:(id /* block */)a0;
- (void)seekToEnd;
- (void)seekToStart;

@end

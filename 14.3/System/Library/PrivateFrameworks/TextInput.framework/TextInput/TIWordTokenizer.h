@class NSString;

@interface TIWordTokenizer : NSObject {
    NSString *m_string;
    struct { unsigned short buffer[64]; struct __CFString *theString; unsigned short *directUniCharBuffer; char *directCStringBuffer; struct { long long location; long long length; } rangeToBuffer; long long bufferedRangeStart; long long bufferedRangeEnd; } m_inlineBuffer;
    struct _NSRange { unsigned long long location; unsigned long long length; } m_tokenRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } m_searchRange;
    unsigned long long m_bufferOffset;
}

- (void)setString:(id)a0 withSearchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)allTokensForString:(id)a0;
- (id)init;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfCurrentToken;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })advanceToNextToken;

@end

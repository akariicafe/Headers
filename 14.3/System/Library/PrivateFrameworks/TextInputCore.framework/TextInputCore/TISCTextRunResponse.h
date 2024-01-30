@class NSMutableArray;

@interface TISCTextRunResponse : NSObject {
    struct __CFArray { } *_ctLines;
    NSMutableArray *_widths;
    struct __CTFont { } *_font;
}

+ (id)textRunResponseWithFont:(struct __CTFont { } *)a0;
+ (id)textRunResponseByMergingResponses:(id)a0;

- (struct __CTFont { } *)font;
- (void).cxx_destruct;
- (void)dealloc;
- (id)widths;
- (struct __CFArray { } *)ctLines;

@end

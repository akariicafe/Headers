@class NSMutableArray;

@interface TISCTextRunResponse : NSObject {
    struct __CFArray { } *_ctLines;
    NSMutableArray *_widths;
    struct __CTFont { } *_font;
}

+ (id)textRunResponseWithFont:(struct __CTFont { } *)a0;
+ (id)textRunResponseByMergingResponses:(id)a0;

- (id)widths;
- (void).cxx_destruct;
- (struct __CFArray { } *)ctLines;
- (struct __CTFont { } *)font;
- (void)dealloc;

@end

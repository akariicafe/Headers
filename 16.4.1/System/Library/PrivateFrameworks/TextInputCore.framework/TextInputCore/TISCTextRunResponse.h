@class NSMutableArray;

@interface TISCTextRunResponse : NSObject {
    struct __CFArray { } *_ctLines;
    NSMutableArray *_widths;
    struct __CTFont { } *_font;
}

+ (id)textRunResponseByMergingResponses:(id)a0;
+ (id)textRunResponseWithFont:(struct __CTFont { } *)a0;

- (struct __CTFont { } *)font;
- (void)dealloc;
- (void).cxx_destruct;
- (id)widths;
- (struct __CFArray { } *)ctLines;

@end

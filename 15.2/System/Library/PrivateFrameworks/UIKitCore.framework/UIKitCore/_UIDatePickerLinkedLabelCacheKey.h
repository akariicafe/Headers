@class NSString, UIFont;

@interface _UIDatePickerLinkedLabelCacheKey : NSObject {
    NSString *_text;
    UIFont *_font;
    double _height;
    unsigned long long _hash;
}

+ (id)keyWithText:(id)a0 font:(id)a1 height:(double)a2;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithText:(id)a0 font:(id)a1 height:(double)a2;

@end

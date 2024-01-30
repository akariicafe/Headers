@class NSString;

@interface TSWPEquationLayoutContext : NSObject <EQKitLayoutContext> {
    struct __CFString { } *_fontName;
}

@property (nonatomic) double fontSize;
@property (nonatomic) double columnWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (double)containerWidth;
- (BOOL)isEqual:(id)a0;
- (double)baseFontSize;
- (struct __CFString { } *)baseFontName;
- (id)initWithTextAttributes:(struct __CFDictionary { } *)a0 columnWidth:(double)a1;

@end

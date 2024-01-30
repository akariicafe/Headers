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

- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (double)baseFontSize;
- (double)containerWidth;
- (struct __CFString { } *)baseFontName;
- (id)initWithTextAttributes:(struct __CFDictionary { } *)a0 columnWidth:(double)a1;

@end

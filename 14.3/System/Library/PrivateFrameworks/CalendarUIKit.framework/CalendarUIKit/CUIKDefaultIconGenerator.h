@class NSString;

@interface CUIKDefaultIconGenerator : NSObject <CUIKIconGenerator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dateNameFromDateComponents:(id)a0 calendar:(id)a1 type:(long long)a2;
+ (id)_whiteImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
+ (void)_drawIconInContext:(struct CGContext { } *)a0 imageSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 iconBase:(id)a3 dateComponents:(id)a4 calendar:(id)a5 format:(long long)a6;
+ (id)_dayNumberStringFromDateComponents:(id)a0 calendar:(id)a1;

- (struct CGImage { } *)iconImageWithDateComponents:(id)a0 calendar:(id)a1 format:(long long)a2 size:(struct CGSize { double x0; double x1; })a3 scale:(double)a4;

@end

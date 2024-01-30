@interface CUIKCalendarApplicationIcon : NSObject

+ (void)drawIconInContext:(struct CGContext { } *)a0 imageSize:(struct CGSize { double x0; double x1; })a1 iconBase:(id)a2 date:(id)a3 calendar:(id)a4 format:(int)a5;
+ (id)_iconImageWithFormat:(int)a0 square:(BOOL)a1 outline:(BOOL)a2 drawBlock:(id /* block */)a3;
+ (id)iconImageWithDate:(id)a0 calendar:(id)a1 format:(int)a2 outline:(BOOL)a3;
+ (long long)_translateUIApplicationIconFormat:(int)a0;
+ (void)drawIconInContext:(struct CGContext { } *)a0 imageSize:(struct CGSize { double x0; double x1; })a1 iconBase:(id)a2 dateComponents:(id)a3 dateNameFormatType:(long long)a4 format:(long long)a5 showGrid:(BOOL)a6;
+ (double)_imageScaleForApplicationIconFormat:(int)a0;
+ (id)getUnmaskedIconImage:(int)a0;
+ (id)getMaskedIconImageWithFormat:(int)a0 imageScale:(double)a1;
+ (BOOL)formatSupportsDynamicIcon:(int)a0;
+ (int)_iconVariantForFormat:(int)a0 scale:(double)a1 outline:(BOOL)a2;
+ (id)croppedIconImage:(id)a0 format:(int)a1;
+ (id)_whiteImage;
+ (long long)dynamicIconFormat:(int)a0;
+ (long long)_iconDateNameFormatTypeForDate:(id)a0 calendar:(id)a1 format:(int)a2;
+ (id)_dayNumberStringFromDate:(id)a0 calendar:(id)a1;
+ (id)_dateNameFromDate:(id)a0 calendar:(id)a1 type:(long long)a2 style:(long long)a3;
+ (void)_drawIconInContext:(struct CGContext { } *)a0 imageSize:(struct CGSize { double x0; double x1; })a1 iconBase:(id)a2 calendar:(id)a3 dayNumberString:(id)a4 dateNameBlock:(id /* block */)a5 dateNameFormatType:(long long)a6 format:(long long)a7 showGrid:(BOOL)a8;
+ (id)_dayNumberStringFromDateComponents:(id)a0;
+ (id)_dateNameFromDateComponents:(id)a0 type:(long long)a1 style:(long long)a2;
+ (void)_fillContextWithWhiteBackgroundIfNeededForFormat:(long long)a0 context:(struct CGContext { } *)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (void)_drawGridInContext:(struct CGContext { } *)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)iconImageWithDate:(id)a0 calendar:(id)a1 format:(int)a2;
+ (id)iconImageWithDateComponents:(id)a0 dateNameFormatType:(long long)a1 format:(int)a2;
+ (int)iconVersion;

@end

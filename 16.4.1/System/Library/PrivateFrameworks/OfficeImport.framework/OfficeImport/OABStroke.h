@interface OABStroke : NSObject

+ (unsigned char)readCapStyle:(int)a0;
+ (unsigned char)readCompoundType:(int)a0;
+ (unsigned char)readLineEndLength:(int)a0;
+ (unsigned char)readLineEndType:(int)a0;
+ (unsigned char)readLineEndWidth:(int)a0;
+ (id)readLineEndWithType:(int)a0 width:(int)a1 length:(int)a2;
+ (char)readPresetDashStyle:(int)a0;
+ (id)readStrokeFromShapeBaseManager:(id)a0 state:(id)a1;
+ (int)writeCapStyle:(unsigned char)a0;
+ (int)writeCompoundType:(unsigned char)a0;
+ (int)writeLineEndLength:(unsigned char)a0;
+ (int)writeLineEndType:(unsigned char)a0;
+ (int)writeLineEndWidth:(unsigned char)a0;
+ (int)writePresetDashStyle:(char)a0;
+ (void)writePresetDashStyleForCustomDash:(id)a0 toStroke:(struct EshStroke { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *)a1 state:(id)a2;

@end

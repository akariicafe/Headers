@interface OAVStroke : NSObject

+ (void)initialize;
+ (id)readFromManager:(id)a0;
+ (id)targetFgColorWithManager:(id)a0;
+ (void)readFillStyleFromManager:(id)a0 toStroke:(id)a1;
+ (void)readDashStyleFromManager:(id)a0 toStroke:(id)a1;
+ (void)readJoinStyleFromManager:(id)a0 toStroke:(id)a1;
+ (id)readLineEndWithType:(id)a0 width:(id)a1 length:(id)a2;
+ (unsigned char)readCapStyle:(id)a0;
+ (unsigned char)readCompoundType:(id)a0;
+ (unsigned char)readLineEndType:(id)a0;
+ (unsigned char)readLineEndWidth:(id)a0;
+ (unsigned char)readLineEndLength:(id)a0;
+ (char)readPresetDashStyle:(id)a0;

@end

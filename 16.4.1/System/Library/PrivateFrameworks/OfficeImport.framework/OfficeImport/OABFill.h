@interface OABFill : NSObject

+ (void)addStopsFromArray:(const struct OABGradientStop { id x0; float x1; } *)a0 stopCount:(int)a1 inverted:(BOOL)a2 startPos:(float)a3 endPos:(float)a4 toStopArray:(id)a5 fillPropertiesManager:(id)a6;
+ (id)patternFromBlipId:(unsigned int)a0 blipName:(id)a1 blipDataReference:(struct EshBlip { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; struct UID { unsigned char x0[16]; } x3; } *)a2 state:(id)a3;
+ (id)readFillFromFillPropertiesManager:(id)a0 state:(id)a1;
+ (void)readGradientFill:(id)a0 fromFillPropertiesManager:(id)a1 state:(id)a2;
+ (void)readImageFill:(id)a0 fromFillPropertiesManager:(id)a1 state:(id)a2;

@end

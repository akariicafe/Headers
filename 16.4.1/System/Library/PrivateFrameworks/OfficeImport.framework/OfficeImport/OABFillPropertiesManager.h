@class NSString;
@protocol OABPropertiesManager;

@interface OABFillPropertiesManager : NSObject <OABFillPropertiesManager> {
    const struct EshFill { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *mFill;
    int mShapeType;
    id<OABPropertiesManager> mMasterManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })shadowColor;
- (void).cxx_destruct;
- (int)fillType;
- (BOOL)isFilled;
- (int)fillFocusBottom;
- (int)fillAngle;
- (int)fillBgAlpha;
- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })fillBgColor;
- (struct EshBlip { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; struct UID { unsigned char x0[16]; } x3; } *)fillBlipDataReference;
- (unsigned int)fillBlipID;
- (id)fillBlipName;
- (int)fillFgAlpha;
- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })fillFgColor;
- (int)fillFocus;
- (int)fillFocusLeft;
- (int)fillFocusRight;
- (int)fillFocusTop;
- (const void *)fillGradientColors;
- (id)initWithFill:(const struct EshFill { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *)a0 shapeType:(int)a1 masterShape:(struct EshShape { } *)a2;
- (BOOL)isStroked;
- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })strokeBgColor;
- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })strokeFgColor;

@end

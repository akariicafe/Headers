@class NSString;

@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager> {
    void *mShape;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithShape:(void *)a0;
- (BOOL)hidden;
- (BOOL)isFilled;
- (BOOL)isShadowed;
- (id)initWithShape:(void *)a0 masterShape:(void *)a1;
- (BOOL)isFillOK;
- (BOOL)isShadowOK;
- (BOOL)isStrokeOK;
- (BOOL)isStroked;
- (BOOL)isTextPath;
- (BOOL)textPathBold;
- (id)textPathFontFamily;
- (int)textPathFontSize;
- (BOOL)textPathItalic;
- (BOOL)textPathSmallcaps;
- (BOOL)textPathStrikethrough;
- (int)textPathTextAlignment;
- (BOOL)textPathUnderline;
- (id)textPathUnicodeString;

@end

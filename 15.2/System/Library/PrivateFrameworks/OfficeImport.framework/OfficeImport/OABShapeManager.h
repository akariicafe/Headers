@class NSString;

@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager> {
    void *mShape;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hidden;
- (BOOL)isShadowed;
- (BOOL)isFilled;
- (id)initWithShape:(void *)a0;
- (id)initWithShape:(void *)a0 masterShape:(void *)a1;
- (BOOL)isStroked;
- (BOOL)isTextPath;
- (BOOL)isFillOK;
- (BOOL)isStrokeOK;
- (BOOL)isShadowOK;
- (id)textPathUnicodeString;
- (int)textPathTextAlignment;
- (int)textPathFontSize;
- (id)textPathFontFamily;
- (BOOL)textPathBold;
- (BOOL)textPathItalic;
- (BOOL)textPathUnderline;
- (BOOL)textPathSmallcaps;
- (BOOL)textPathStrikethrough;

@end

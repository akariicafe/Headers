@class NSString;

@interface SXPresentationAttributes : NSObject

@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (retain, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) BOOL fadeInComponents;
@property (nonatomic) double contentScaleFactor;
@property (nonatomic) BOOL useTransparentToolbar;
@property (nonatomic) BOOL enableViewportDebugging;
@property (nonatomic) BOOL testingConditionEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end

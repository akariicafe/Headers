@class NSString;

@interface SXPresentationAttributes : NSObject

@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (retain, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) BOOL fadeInComponents;
@property (nonatomic) double contentScaleFactor;
@property (nonatomic) BOOL enableViewportDebugging;
@property (nonatomic) BOOL testingConditionEnabled;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end

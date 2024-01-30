@class NSString, NSBundle, UIColor;

@interface NTKFaceColorPaletteInspector : NSObject

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *pigmentName;
@property (retain, nonatomic) NSString *propertyName;
@property (retain, nonatomic) NSBundle *bundleLocation;
@property (retain, nonatomic) NSString *pathLocation;
@property (retain, nonatomic) NSString *fallbackMethodName;
@property (nonatomic) BOOL isTritium;
@property (retain, nonatomic) UIColor *color;

- (id)description;
- (void).cxx_destruct;

@end

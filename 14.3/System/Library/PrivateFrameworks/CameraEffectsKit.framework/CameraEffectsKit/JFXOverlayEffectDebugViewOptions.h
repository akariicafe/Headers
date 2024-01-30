@class UIColor, NSArray;

@interface JFXOverlayEffectDebugViewOptions : NSObject

@property (nonatomic) BOOL showDocumentBoundingBox;
@property (nonatomic) BOOL showObjectAlignedBoundingBox;
@property (nonatomic) BOOL showTextBoundingBoxes;
@property (nonatomic) BOOL showHitAreaBoundingBox;
@property (nonatomic) BOOL showTapPoints;
@property (nonatomic) BOOL showMidpoint;
@property (nonatomic) BOOL showCornerPoints;
@property (nonatomic) BOOL showTextCornerPoints;
@property (nonatomic) BOOL showHitAreaPoints;
@property (nonatomic) BOOL showAdditionalRects;
@property (retain, nonatomic) UIColor *documentBoundingBoxColor;
@property (retain, nonatomic) UIColor *objectAlignedBoundingBoxColor;
@property (retain, nonatomic) NSArray *textBoundingBoxColors;
@property (retain, nonatomic) UIColor *hitAreaBoundingBoxColor;
@property (retain, nonatomic) UIColor *midpointColor;
@property (retain, nonatomic) NSArray *cornerPointColors;
@property (retain, nonatomic) NSArray *textCornerPointColors;
@property (retain, nonatomic) NSArray *hitAreaPointColors;

+ (id)debugViewOptionsWithDictionary:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end

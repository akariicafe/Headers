@class NSString, NSMutableIndexSet, TSWPShapeRep;

@interface TSWPShapeRepMagicMoveTextChunk : NSObject

@property (nonatomic) TSWPShapeRep *rep;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (copy, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL hasListLabel;
@property (retain, nonatomic) NSMutableIndexSet *unhandledIndexSet;
@property (nonatomic) long long stageIndex;
@property (nonatomic) BOOL isVisible;
@property (nonatomic) double opacityFromRenderer;
@property (nonatomic) BOOL shouldTreatAsSingleCharacter;
@property (nonatomic) BOOL hasBackgroundShape;

- (id)description;
- (id)init;
- (void)dealloc;

@end

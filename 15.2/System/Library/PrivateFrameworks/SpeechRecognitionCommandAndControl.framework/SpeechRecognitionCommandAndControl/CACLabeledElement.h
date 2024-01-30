@class NSString, NSArray, CACTextMarkerRange, AXElement;

@interface CACLabeledElement : NSObject <CACVoiceOverDescribable, CACLabeledGridOverlayViewElement, AXElementNamesItem, CACNumberedElement>

@property (readonly, nonatomic) NSString *unfilteredRecognitionLabel;
@property (readonly, nonatomic) NSString *recognitionLabel;
@property (readonly, nonatomic) NSString *fullLabel;
@property (readonly, nonatomic) NSString *valueLabel;
@property (readonly, nonatomic) NSString *numberedLabel;
@property (readonly, nonatomic) unsigned long long traits;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rectangle;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *elementName;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } elementFrame;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } elementLabelContainerSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } labelRectangle;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } interfaceOrientedRectangle;
@property (readonly, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *numberedLabel;
@property (nonatomic) long long arrowOrientation;
@property (nonatomic) long long badgePresentation;
@property (readonly, nonatomic) NSString *unfilteredRecognitionLabel;
@property (readonly, nonatomic) NSString *recognitionLabel;
@property (readonly, nonatomic) NSString *fullLabel;
@property (readonly, nonatomic) NSString *valueLabel;
@property (readonly, nonatomic) unsigned long long traits;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (retain, nonatomic) AXElement *element;
@property (retain, nonatomic) NSArray *recognitionStrings;
@property (retain, nonatomic) NSString *numberedLabel;
@property (retain, nonatomic) NSString *axIdentifier;
@property (retain, nonatomic) CACTextMarkerRange *textMarkerRange;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectangle;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } interfaceOrientedRectangle;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } labelRectangle;
@property (nonatomic) BOOL hasBeenCollected;
@property (readonly, nonatomic) NSString *label;
@property (nonatomic) long long arrowOrientation;
@property (nonatomic) long long badgePresentation;

- (id)description;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })quantizedPosition;
- (id)initWithElement:(id)a0 recognitionStrings:(id)a1 rectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (long long)quantizedPositionCompare:(id)a0;

@end

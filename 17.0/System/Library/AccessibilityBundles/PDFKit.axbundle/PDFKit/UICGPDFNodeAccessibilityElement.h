@class NSString, NSMutableArray;

@interface UICGPDFNodeAccessibilityElement : AXPDFNodeElement <UIAccessibilityContainerDataTable, UIAccessibilityContainerDataTableCell>

@property (retain, nonatomic) NSMutableArray *cachedAXElements;
@property (retain, nonatomic) NSMutableArray *cachedAXPDFLinks;
@property (retain, nonatomic) NSMutableArray *cachedAXPDFOtherLinks;
@property (retain, nonatomic) NSMutableArray *cachedAXPDFLinkNodes;
@property (retain, nonatomic) NSMutableArray *cachedAXPDFTableCellNodes;
@property (retain, nonatomic) NSMutableArray *cachedAXFigureChildrenNodesOfTableCellNode;
@property (retain, nonatomic) NSMutableArray *cachedAXCaptionChildrenNodesOfFigureNode;
@property (nonatomic) long long listItemNumber;
@property (retain, nonatomic) NSString *listStyle;
@property (retain, nonatomic) NSString *altText;
@property (nonatomic) struct CGPDFTaggedNode { } *nodeRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_addPDFAnnotation:(id)a0 toPDFAccessibilityNode:(id)a1;
+ (BOOL)_containsOnlyTextChildren:(struct CGPDFTaggedNode { } *)a0;
+ (void)_findClosestLineNodeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withRootNode:(id)a1 withDistanceBetterThan:(double *)a2 parentFound:(id *)a3 siblingFound:(id *)a4;
+ (BOOL)_isValidTextFieldElement:(id)a0;
+ (void)buildPDFAnnotationNodes:(id)a0;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityElements;
- (long long)accessibilityContainerType;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityCustomRotors;
- (id)accessibilityIdentification;
- (id)accessibilityLanguage;
- (id)_accessibilityHeadingLevel;
- (unsigned long long)accessibilityColumnCount;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityColumnRange;
- (id)accessibilityDataTableCellElementForRow:(unsigned long long)a0 column:(unsigned long long)a1;
- (id)accessibilityHeaderElementsForColumn:(unsigned long long)a0;
- (id)accessibilityHeaderElementsForRow:(unsigned long long)a0;
- (unsigned long long)accessibilityRowCount;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForScrolling;
- (id)_accessibilityLinks;
- (unsigned long long)_findTraitsForTableCellElements;
- (id)_accessibilityPDFCustomLinksRotor;
- (void)_accessibilitySetPDFCustomLinksRotor:(id)a0;
- (id)_accessibilityStringForListType:(int)a0;
- (id)_attributedAccessibilityLabelForNode:(struct CGPDFTaggedNode { } *)a0;
- (void)_axHandleUpdateVisibility:(id)a0;
- (id)_findCaptionChildrenNodesOfFigureNode:(id)a0;
- (id)_findFigureChildrenNodesOfTableCellNode:(id)a0;
- (id)_findLabelChildNodeOfListItem:(id)a0;
- (id)_findLinkChildrenNodesOfNode:(id)a0;
- (id)_findTOCIChildNodeOfNode:(id)a0;
- (id)_findTableCellNodesOfTableNode:(id)a0 withHeadersOnly:(BOOL)a1;
- (BOOL)_isContainerOfOnlyOneLinkNodeChild;
- (BOOL)_isSubFigure;
- (id)_paragraphLinksInNode:(id)a0;
- (BOOL)_pdfElementHasLinkContainer;
- (id)initWithAccessibilityContainer:(id)a0 pdfNodeRef:(struct CGPDFTaggedNode { } *)a1 withPage:(id)a2;

@end

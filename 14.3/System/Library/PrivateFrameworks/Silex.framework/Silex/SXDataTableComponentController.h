@class NSArray, NSString, SXDataRecordValueTransformerFactory, SXDataTableDictionary;
@protocol SXDataTableComponentControllerDataSource, SXDataTableTextSourceFactory, SXDataTableStyleFactory, SXDOMObjectProviding;

@interface SXDataTableComponentController : NSObject <SXTextSourceDataSource, SXDataTableDataSource>

@property (readonly, nonatomic) id<SXDataTableStyleFactory> styleFactory;
@property (readonly, nonatomic) id<SXDataTableTextSourceFactory> textSourceFactory;
@property (retain, nonatomic) NSArray *records;
@property (retain, nonatomic) SXDataRecordValueTransformerFactory *recordValueTransformerFactory;
@property (readonly, nonatomic) id<SXDOMObjectProviding> DOMObjectProvider;
@property (readonly, nonatomic) SXDataTableDictionary *cellObjects;
@property (readonly, nonatomic) SXDataTableDictionary *textLayouters;
@property (readonly, weak, nonatomic) id<SXDataTableComponentControllerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfRows;
- (void).cxx_destruct;
- (unsigned long long)numberOfColumns;
- (void)loadRecords;
- (id)component;
- (id)componentTextStyleForTextSource:(id)a0 inheritingFromDefaultStyles:(BOOL)a1;
- (id)textStyleForIdentifier:(id)a0;
- (id)textResizerForTextSource:(id)a0;
- (id)textRulesForTextSource:(id)a0;
- (id)additionsForTextSource:(id)a0;
- (id)inlineTextStylesForTextSource:(id)a0;
- (id)contentSizeCategoryForTextSource:(id)a0;
- (id)defaultComponentTextStyleForTextSource:(id)a0;
- (id)defaultComponentTextStylesForTextSource:(id)a0;
- (unsigned long long)dataOrientation;
- (id)initWithStyleFactory:(id)a0 textSourceFactory:(id)a1 dataSource:(id)a2 recordValueTransformerFactory:(id)a3 DOMObjectProvider:(id)a4;
- (void)prepareForLayout;
- (id)rowStyleForRowIndex:(unsigned long long)a0;
- (id)columnStyleForColumnIndex:(unsigned long long)a0;
- (id)cellStyleForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)indexPathIsHeader:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)dataDescriptorForIdentifier:(id)a0;
- (BOOL)hasRowHeader;
- (BOOL)hasColumnHeader;
- (id)dataDescriptorForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (struct { unsigned long long x0; unsigned long long x1; })indexPathSubstractingHeaders:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)recordForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)cellObjectForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (double)convertConvertibleValue:(struct _SXConvertibleValue { double x0; unsigned long long x1; })a0;
- (id)textLayouterForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (double)minimumWidthForStorage:(id)a0 usingStringEnumeration:(unsigned long long)a1;
- (BOOL)shouldTreatIndexPathAsHeader:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)tableBorder;
- (id)backgroundColorForRowAtIndex:(unsigned long long)a0;
- (id)backgroundColorForColumnAtIndex:(unsigned long long)a0;
- (id)backgroundColorForCellAtIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (double)widthForCellAtIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (double)heightForCellAtIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (double)minimumWidthForCellAtIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (double)heightForCellndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0 forWidth:(double)a1;
- (id)cellBorderForCellAtIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (struct { double x0; double x1; double x2; double x3; })paddingForCellAtIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)verticalAlignmentForCellAtIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)horizontalAlignmentForCellAtIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)rowDividerAtIndex:(unsigned long long)a0;
- (id)columnDividerAtIndex:(unsigned long long)a0;

@end

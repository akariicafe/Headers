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
- (id)component;
- (unsigned long long)numberOfColumns;
- (void).cxx_destruct;
- (void)prepareForLayout;
- (void)loadRecords;
- (unsigned long long)dataOrientation;
- (double)heightForCellndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0 forWidth:(double)a1;
- (double)minimumWidthForCellAtIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)hasColumnHeader;
- (id)additionsForTextSource:(id)a0;
- (id)backgroundColorForCellAtIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)backgroundColorForColumnAtIndex:(unsigned long long)a0;
- (id)backgroundColorForRowAtIndex:(unsigned long long)a0;
- (id)cellBorderForCellAtIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)cellObjectForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)cellStyleForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)columnDividerAtIndex:(unsigned long long)a0;
- (id)columnStyleForColumnIndex:(unsigned long long)a0;
- (id)componentTextStyleForTextSource:(id)a0 inheritingFromDefaultStyles:(BOOL)a1;
- (id)contentSizeCategoryForTextSource:(id)a0;
- (double)convertConvertibleValue:(struct _SXConvertibleValue { double x0; unsigned long long x1; })a0;
- (id)dataDescriptorForIdentifier:(id)a0;
- (id)dataDescriptorForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)defaultComponentTextStyleForTextSource:(id)a0;
- (id)defaultComponentTextStylesForTextSource:(id)a0;
- (BOOL)hasRowHeader;
- (double)heightForCellAtIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)horizontalAlignmentForCellAtIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)indexPathIsHeader:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (struct { unsigned long long x0; unsigned long long x1; })indexPathSubstractingHeaders:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithStyleFactory:(id)a0 textSourceFactory:(id)a1 dataSource:(id)a2 recordValueTransformerFactory:(id)a3 DOMObjectProvider:(id)a4;
- (id)inlineTextStylesForTextSource:(id)a0;
- (double)minimumWidthForStorage:(id)a0 usingStringEnumeration:(unsigned long long)a1;
- (struct { double x0; double x1; double x2; double x3; })paddingForCellAtIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)recordForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)rowDividerAtIndex:(unsigned long long)a0;
- (id)rowStyleForRowIndex:(unsigned long long)a0;
- (BOOL)shouldTreatIndexPathAsHeader:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)tableBorder;
- (id)textLayouterForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)textResizerForTextSource:(id)a0;
- (id)textRulesForTextSource:(id)a0;
- (id)textStyleForIdentifier:(id)a0;
- (unsigned long long)verticalAlignmentForCellAtIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (double)widthForCellAtIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;

@end

@class NSString, SXDataRecordStore, SXDataTableStyle, SXJSONObjectMerger, SXDataTableSelectorValidator;

@interface SXDataTableComponentStyleFactory : NSObject <SXDataTableStyleFactory>

@property (readonly, nonatomic) SXDataRecordStore *recordStore;
@property (readonly, nonatomic) SXDataTableStyle *tableStyle;
@property (readonly, nonatomic) unsigned long long dataOrientation;
@property (readonly, nonatomic) SXDataTableSelectorValidator *selectorValidator;
@property (readonly, nonatomic) SXJSONObjectMerger *rowStyleMerger;
@property (readonly, nonatomic) SXJSONObjectMerger *columnStyleMerger;
@property (readonly, nonatomic) SXJSONObjectMerger *cellStyleMerger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptorForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)cellStyleForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)cellStyleForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0 usingBaseStyle:(id)a1;
- (id)columnStyleForColumnIndex:(unsigned long long)a0;
- (id)columnStyleForColumnIndex:(unsigned long long)a0 usingBaseStyle:(id)a1;
- (long long)compareSelector:(id)a0 withOtherSelector:(id)a1;
- (id)dataTableStyle;
- (id)filterDuplicateSequentialStyles:(id)a0;
- (id)headerCellStyleForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)headerColumnStyleForColumnIndex:(unsigned long long)a0;
- (id)headerRowStyleForRowIndex:(unsigned long long)a0;
- (id)initWithRecordStore:(id)a0 tableStyle:(id)a1 dataOrientation:(unsigned long long)a2 rowStyleMerger:(id)a3 columnStyleMerger:(id)a4 cellStyleMerger:(id)a5;
- (unsigned long long)isEvenNumber:(long long)a0;
- (unsigned long long)isOddNumber:(long long)a0;
- (id)rowStyleForRowIndex:(unsigned long long)a0;
- (id)rowStyleForRowIndex:(unsigned long long)a0 usingBaseStyle:(id)a1;
- (id)sortStylesMatchesBySelectorWeight:(id)a0;
- (id)styleByMergingStyleMatches:(id)a0 forBaseStyle:(id)a1 merger:(id)a2;

@end

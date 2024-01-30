@class SXDataRecordStore;

@interface SXDataTableSelectorValidator : NSObject

@property (readonly, nonatomic) SXDataRecordStore *recordStore;
@property (readonly, nonatomic) unsigned long long dataOrientation;

- (void).cxx_destruct;
- (id)conditionEngineForSelector:(id)a0 forIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a1;
- (id)descriptorForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithRecordStore:(id)a0 dataOrientation:(unsigned long long)a1;
- (BOOL)validateCellSelector:(id)a0 forIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)validateColumnSelector:(id)a0 forColumnIndex:(unsigned long long)a1;
- (BOOL)validateRowSelector:(id)a0 forRowIndex:(unsigned long long)a1;

@end

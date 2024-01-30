@class CPLRecordView, CPLRecordChange;

@interface CPLChangedRecordView : CPLRecordView

@property (readonly, nonatomic) CPLRecordView *baseRecordView;
@property (readonly, nonatomic) CPLRecordChange *change;

- (id)scopedIdentifier;
- (void).cxx_destruct;
- (id)redactedDescription;
- (BOOL)supportsResources;
- (id)description;
- (Class)recordClass;
- (id)synthesizedRecord;
- (id)initWithChange:(id)a0 overRecordView:(id)a1;
- (id)changeForType:(unsigned long long)a0;

@end

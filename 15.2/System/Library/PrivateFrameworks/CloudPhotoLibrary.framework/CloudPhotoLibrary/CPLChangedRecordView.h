@class CPLRecordView, CPLRecordChange;

@interface CPLChangedRecordView : CPLRecordView

@property (readonly, nonatomic) CPLRecordView *baseRecordView;
@property (readonly, nonatomic) CPLRecordChange *change;

- (id)description;
- (id)synthesizedRecord;
- (void).cxx_destruct;
- (id)recordChangeData;
- (id)scopedIdentifier;
- (BOOL)supportsResources;
- (id)redactedDescription;
- (Class)recordClass;
- (id)initWithChange:(id)a0 overRecordView:(id)a1;
- (id)placeholderRecord;
- (id)changeForType:(unsigned long long)a0;

@end

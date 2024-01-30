@class CPLRecordView, CPLRecordChange;

@interface CPLChangedRecordView : CPLRecordView

@property (readonly, nonatomic) CPLRecordView *baseRecordView;
@property (readonly, nonatomic) CPLRecordChange *change;

- (id)redactedDescription;
- (id)scopedIdentifier;
- (id)description;
- (id)synthesizedRecord;
- (void).cxx_destruct;
- (Class)recordClass;
- (id)changeForType:(unsigned long long)a0;
- (id)initWithChange:(id)a0 overRecordView:(id)a1;
- (id)placeholderRecord;
- (id)recordChangeData;
- (id)sharingRecordChangeData;

@end

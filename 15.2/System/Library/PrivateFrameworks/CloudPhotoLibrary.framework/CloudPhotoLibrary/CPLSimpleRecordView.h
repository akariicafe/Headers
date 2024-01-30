@class CPLRecordChange;

@interface CPLSimpleRecordView : CPLRecordView {
    CPLRecordChange *_synthesizedRecord;
}

- (id)initWithRecord:(id)a0;
- (id)synthesizedRecord;
- (void).cxx_destruct;
- (id)scopedIdentifier;

@end

@class CPLRecordChange;

@interface CPLSimpleRecordView : CPLRecordView {
    CPLRecordChange *_synthesizedRecord;
}

- (id)initWithRecord:(id)a0;
- (id)scopedIdentifier;
- (id)synthesizedRecord;
- (void).cxx_destruct;

@end

@class CPLRecordStatus, CPLRecordChange, NSDate;

@interface _CPLTransientStatus : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) CPLRecordChange *record;
@property (readonly, nonatomic) unsigned long long generation;
@property (readonly, nonatomic) CPLRecordStatus *status;

- (void).cxx_destruct;
- (id)initWithRecord:(id)a0 generation:(unsigned long long)a1 date:(id)a2;

@end

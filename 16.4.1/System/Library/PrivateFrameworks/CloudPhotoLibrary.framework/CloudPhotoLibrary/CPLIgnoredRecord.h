@class CPLRecordChange, NSDate;

@interface CPLIgnoredRecord : NSObject

@property (readonly, nonatomic) CPLRecordChange *record;
@property (readonly, nonatomic) NSDate *ignoredDate;

- (void).cxx_destruct;
- (id)initWithRecord:(id)a0 ignoredDate:(id)a1;

@end

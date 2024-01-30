@class NSArray, STSNDEFRecord;

@interface STSCHNdefRecordBundle : NSObject

@property (retain, nonatomic) STSNDEFRecord *alternativeRecord;
@property (retain, nonatomic) STSNDEFRecord *configurationRecord;
@property (retain, nonatomic) NSArray *auxiliaryRecords;
@property (retain, nonatomic) STSNDEFRecord *errorRecord;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAlternativeRecord:(id)a0 configurationRecord:(id)a1 auxiliaryRecords:(id)a2 errorRecord:(id)a3;

@end

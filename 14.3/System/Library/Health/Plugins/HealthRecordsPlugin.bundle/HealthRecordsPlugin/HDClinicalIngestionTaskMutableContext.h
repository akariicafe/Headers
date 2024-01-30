@class NSString, NSFileHandle;

@interface HDClinicalIngestionTaskMutableContext : HDClinicalIngestionTaskContext

@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSString *reason;
@property (retain, nonatomic) NSFileHandle *inputFileHandle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setInputFileHandle:(id)a0;

@end

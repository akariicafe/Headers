@interface HMDRecordOperationLogEvent : HMMLogEvent

@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic, getter=isLegacy) BOOL legacy;

- (id)initWithSize:(unsigned long long)a0 isLegacy:(BOOL)a1;

@end

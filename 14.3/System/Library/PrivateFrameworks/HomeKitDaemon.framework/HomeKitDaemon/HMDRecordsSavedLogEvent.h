@interface HMDRecordsSavedLogEvent : HMDLogEvent

@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic, getter=isLegacy) BOOL legacy;

+ (id)uuid;

- (id)initWithSavedRecords:(id)a0 isLegacy:(BOOL)a1;

@end

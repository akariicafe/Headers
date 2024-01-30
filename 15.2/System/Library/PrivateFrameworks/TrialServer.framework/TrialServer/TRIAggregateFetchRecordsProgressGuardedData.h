@class NSMutableDictionary;

@interface TRIAggregateFetchRecordsProgressGuardedData : NSObject {
    NSMutableDictionary *perRecordProgress;
    unsigned long long expectedTotalBytes;
    unsigned long long actualBytesTransferred;
}

- (void).cxx_destruct;

@end

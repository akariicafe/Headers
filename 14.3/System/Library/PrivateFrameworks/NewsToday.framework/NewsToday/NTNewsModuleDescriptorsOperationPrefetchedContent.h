@class NSDictionary;
@protocol FCTodayPrivateData, FCNewsAppConfiguration;

@interface NTNewsModuleDescriptorsOperationPrefetchedContent : NSObject <NFCopying>

@property (readonly, copy, nonatomic) id<FCNewsAppConfiguration> appConfiguration;
@property (readonly, copy, nonatomic) id<FCTodayPrivateData> privateData;
@property (readonly, copy, nonatomic) NSDictionary *todayConfigsByRequestID;
@property (readonly, copy, nonatomic) NSDictionary *prefetchedHeldRecordsByType;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAppConfiguration:(id)a0 privateData:(id)a1 todayConfigsByRequestID:(id)a2 prefetchedHeldRecordsByType:(id)a3;

@end

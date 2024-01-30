@interface CKVAnalytics : NSObject

+ (void)sendAllDatasetStatistics:(id)a0;
+ (void)sendDonateEvent:(unsigned short)a0 itemCount:(unsigned long long)a1 appId:(id)a2 reason:(unsigned short)a3 result:(BOOL)a4;
+ (void)sendDonateVerification:(unsigned short)a0 isConsistent:(BOOL)a1;

@end

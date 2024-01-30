@interface CKVAnalytics : NSObject

+ (void)sendDonateEvent:(unsigned short)a0 itemCount:(unsigned long long)a1 appId:(id)a2 reason:(unsigned short)a3 result:(long long)a4;
+ (void)sendErrorEvent:(id)a0 errorCode:(long long)a1 underlyingErrorCode:(id)a2 description:(id)a3;
+ (void)sendAllDatasetStatistics:(id)a0;

@end

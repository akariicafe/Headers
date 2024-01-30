@interface MFPOP3Fetcher : NSObject

+ (long long)_fetchWithAccount:(id)a0 intoQueue:(id)a1 newMessages:(unsigned long long)a2 oldMessages:(unsigned long long)a3 preservingUID:(id)a4 withStore:(id)a5;
+ (long long)fetchWithAccount:(id)a0 newMessages:(unsigned long long)a1 oldMessages:(unsigned long long)a2 preservingUID:(id)a3 withStore:(id)a4;

@end

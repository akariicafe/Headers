@interface PKDemoTransactionGenerator : NSObject

+ (id)allPeople;
+ (id)randomMerchant;
+ (id)allMerchants;
+ (void)generateDemoFilesForPasses:(id)a0 peerPaymentPassSerialNumber:(id)a1;
+ (void)generateDemoFiles;
+ (void)demoTransactionsAndEventsForPass:(id)a0 configuration:(id)a1 transactions:(id *)a2 events:(id *)a3;
+ (void)demoTransactionsAndEventsWithConfiguration:(id)a0 transactions:(id *)a1 events:(id *)a2;

@end

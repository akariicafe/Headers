@class NSString;

@interface NSCloudKitMirroringDelegateWorkBlockContext : NSObject

@property (readonly, nonatomic) NSString *transactionLabel;
@property (readonly, nonatomic) NSString *powerAssertionLabel;
@property (readonly, nonatomic) id uiAppInstance;
@property (readonly, nonatomic) unsigned long long powerAssertionID;

- (void)dealloc;
- (id)initWithTransactionLabel:(id)a0 powerAssertionLabel:(id)a1;

@end

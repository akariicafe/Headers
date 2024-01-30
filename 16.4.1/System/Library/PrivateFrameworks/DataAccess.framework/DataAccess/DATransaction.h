@class NSString, NSObject;
@protocol OS_os_transaction;

@interface DATransaction : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *transactionId;

- (id)initWithLabel:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end

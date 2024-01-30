@class NSString;
@protocol BBAssertionDelegate;

@interface BBAssertion : NSObject {
    NSString *_identifier;
    unsigned long long _transactionID;
}

@property (weak, nonatomic) id<BBAssertionDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)transactionID;
- (id)initWithDelegate:(id)a0 identifier:(id)a1;
- (void)increaseOrIgnoreTransactionID:(unsigned long long)a0;
- (id)identifier;

@end

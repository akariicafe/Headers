@class NSString;
@protocol BBAssertionDelegate;

@interface BBAssertion : NSObject {
    NSString *_identifier;
    unsigned long long _transactionID;
}

@property (weak, nonatomic) id<BBAssertionDelegate> delegate;

- (id)initWithDelegate:(id)a0 identifier:(id)a1;
- (id)identifier;
- (void)increaseOrIgnoreTransactionID:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)transactionID;
- (void)dealloc;

@end

@class NSObject;
@protocol OS_os_transaction;

@interface PLXPCTransaction : NSObject {
    const char *_identifier;
    NSObject<OS_os_transaction> *_transaction;
}

+ (void)initialize;
+ (id)callStackSymbols;
+ (void)discardCallStackSymbols:(id)a0;
+ (void)_startTrackingTransaction:(id)a0;
+ (id)transaction:(const char *)a0;
+ (id)openXPCTransactionStatus;
+ (void)_stopTrackingTransaction:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIdentifier:(const char *)a0;
- (id)description;
- (void)stillAlive;
- (id)_statusDescription;

@end

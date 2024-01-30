@class NSObject;
@protocol OS_os_transaction;

@interface PLXPCTransaction : NSObject {
    const char *_identifier;
    NSObject<OS_os_transaction> *_transaction;
}

+ (void)initialize;
+ (void)_stopTrackingTransaction:(id)a0;
+ (id)openXPCTransactionStatus;
+ (void)_startTrackingTransaction:(id)a0;
+ (void)discardCallStackSymbols:(id)a0;
+ (id)callStackSymbols;
+ (id)transaction:(const char *)a0;

- (void)stillAlive;
- (id)initWithIdentifier:(const char *)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)_statusDescription;

@end

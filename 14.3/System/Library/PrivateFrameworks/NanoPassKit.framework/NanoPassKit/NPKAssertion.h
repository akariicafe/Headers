@class NSString;

@interface NPKAssertion : NSObject

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic, getter=isAcquired) BOOL acquired;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long state;

- (void).cxx_destruct;
- (void)invalidateWithCompletion:(id /* block */)a0;
- (id)initWithType:(unsigned long long)a0 reason:(id)a1;
- (id)_errorWithUnderlyingError:(id)a0;
- (void)acquireWithCompletion:(id /* block */)a0;

@end

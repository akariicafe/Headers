@class NSException;

@interface UVExceptionError : NSError

@property (readonly, nonatomic) NSException *exception;

- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
- (id)initWithException:(id)a0;

@end

@class NSString, VSOptional;

@interface VSAppInstallationOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (copy, nonatomic) NSString *buyParams;

- (id)init;
- (void).cxx_destruct;
- (void)executionDidBegin;

@end

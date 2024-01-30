@class FCOperation;

@interface FCProxyOperation : FCOperation

@property (retain, nonatomic) FCOperation *underlyingOperation;

+ (void)initialize;
+ (id)proxyForOperation:(id)a0;

- (void)setQualityOfService:(long long)a0;
- (void)setPurpose:(id)a0;
- (void).cxx_destruct;
- (void)_revisitQualityOfService;
- (unsigned long long)propertiesInheritedByChildOperations;
- (void)_revisitRelativePriority;
- (void)performOperation;
- (void)operationDidFinishWithError:(id)a0;
- (void)setRelativePriority:(long long)a0;

@end

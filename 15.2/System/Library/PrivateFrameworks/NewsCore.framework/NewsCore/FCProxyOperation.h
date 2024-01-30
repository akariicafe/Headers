@class FCOperation;

@interface FCProxyOperation : FCOperation {
    FCOperation *_underlyingOperation;
}

+ (void)initialize;
+ (id)proxyForOperation:(id)a0;

- (void)performOperation;
- (void)setRelativePriority:(long long)a0;
- (void)operationDidFinishWithError:(id)a0;
- (unsigned long long)propertiesInheritedByChildOperations;
- (void)setQualityOfService:(long long)a0;
- (void)setPurpose:(id)a0;
- (void).cxx_destruct;

@end

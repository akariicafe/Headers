@class FCOperation;

@interface FCProxyOperation : FCOperation {
    FCOperation *_underlyingOperation;
}

+ (void)initialize;
+ (id)proxyForOperation:(id)a0;

- (void)setRelativePriority:(long long)a0;
- (void)setQualityOfService:(long long)a0;
- (void)performOperation;
- (void)setPurpose:(id)a0;
- (void)operationDidFinishWithError:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)propertiesInheritedByChildOperations;

@end

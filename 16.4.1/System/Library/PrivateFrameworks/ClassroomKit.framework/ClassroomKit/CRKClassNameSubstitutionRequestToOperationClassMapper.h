@class NSArray, NSString;

@interface CRKClassNameSubstitutionRequestToOperationClassMapper : NSObject <CRKRequestToOperationClassMapping> {
    NSArray *mAllowedPrefixes;
    NSString *mOperationPrefix;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithAllowedRequestPrefixes:(id)a0 operationPrefix:(id)a1;
- (Class)operationClassForRequest:(id)a0;
- (id)prefixForString:(id)a0;
- (id)stringByApplyingOperationPrefixToString:(id)a0;
- (id)stringByApplyingOperationSuffixToString:(id)a0;

@end

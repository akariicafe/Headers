@class NSString;

@interface SXBlockComponentInsertionCacheValidator : NSObject <SXComponentInsertionCacheValidator>

@property (readonly, nonatomic) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)validatorWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (BOOL)validateCache:(id)a0 DOMObjectProvider:(id)a1;

@end

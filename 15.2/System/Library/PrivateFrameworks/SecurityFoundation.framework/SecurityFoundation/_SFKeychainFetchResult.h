@class NSError;

@interface _SFKeychainFetchResult : NSObject {
    id _keychainFetchResultInternal;
}

@property (readonly) long long resultType;
@property (readonly) id value;
@property (readonly) NSError *error;

+ (id)fetchResultWithValue:(id)a0;
+ (id)fetchResultWithError:(id)a0;

- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (void)fetchValueWithAuthenticationContext:(id)a0 resultHandler:(id /* block */)a1;
- (id)initWithValue:(id)a0;

@end

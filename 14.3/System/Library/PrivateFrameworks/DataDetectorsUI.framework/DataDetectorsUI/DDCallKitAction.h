@class TUCallProvider;

@interface DDCallKitAction : DDCallAction

@property (retain) TUCallProvider *callProvider;

+ (BOOL)hostApplicationIsEntitled;
+ (id)callKitProviders;

- (void).cxx_destruct;
- (id)localizedName;
- (long long)TTYType;
- (id)dialRequest;

@end

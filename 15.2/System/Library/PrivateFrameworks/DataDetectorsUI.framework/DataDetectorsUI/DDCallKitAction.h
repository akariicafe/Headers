@class TUCallProvider;

@interface DDCallKitAction : DDCallAction

@property (retain) TUCallProvider *callProvider;

+ (BOOL)hostApplicationIsEntitled;
+ (id)callKitProviders;

- (id)localizedName;
- (id)subtitle;
- (void).cxx_destruct;
- (long long)TTYType;
- (id)dialRequest;

@end

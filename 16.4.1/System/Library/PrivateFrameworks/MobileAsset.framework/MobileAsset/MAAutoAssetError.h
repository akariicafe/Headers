@interface MAAutoAssetError : NSObject

+ (id)buildError:(long long)a0 fromOperation:(id)a1 underlyingError:(id)a2 withDescription:(id)a3;
+ (id)summaryForCode:(long long)a0 fromOperation:(id)a1;

@end

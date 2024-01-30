@class NSData;

@interface RMResolvedDataAsset : RMResolvedAsset

@property (readonly, copy, nonatomic) NSData *data;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 data:(id)a1 error:(id)a2;

@end

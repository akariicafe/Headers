@class NSError;

@interface PXOperationStatus : NSObject <NSCopying>

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic) NSError *error;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (id)operationStatusByMixingOperationStatus:(id)a0 withMixFactor:(double)a1;
- (id)initWithState:(long long)a0 progress:(double)a1 error:(id)a2;
- (BOOL)isEqual:(id)a0;

@end

@class NSError;

@interface PUOperationStatus : NSObject <NSCopying>

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic) NSError *error;

- (id)initWithState:(long long)a0 progress:(double)a1 error:(id)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)operationStatusByMixingOperationStatus:(id)a0 withMixFactor:(double)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)redactedDescription;
- (unsigned long long)hash;

@end

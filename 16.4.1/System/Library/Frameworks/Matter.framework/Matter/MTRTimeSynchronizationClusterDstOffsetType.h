@class NSNumber;

@interface MTRTimeSynchronizationClusterDstOffsetType : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSNumber *validStarting;
@property (copy, nonatomic) NSNumber *validUntil;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end

@class NSError;

@interface VNAsyncStatus : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL completed;
@property (readonly, nonatomic) NSError *error;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStatus:(BOOL)a0 error:(id)a1;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end

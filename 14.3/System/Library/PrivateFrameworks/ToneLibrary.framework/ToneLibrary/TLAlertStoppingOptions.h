@interface TLAlertStoppingOptions : NSObject <NSCopying>

@property (nonatomic) double fadeOutDuration;
@property (nonatomic) BOOL shouldWaitUntilEndOfCurrentRepetition;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end

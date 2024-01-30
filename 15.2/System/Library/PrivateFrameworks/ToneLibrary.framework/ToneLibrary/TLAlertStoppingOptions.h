@interface TLAlertStoppingOptions : NSObject <NSCopying>

@property (nonatomic) double fadeOutDuration;
@property (nonatomic) BOOL shouldWaitUntilEndOfCurrentRepetition;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end

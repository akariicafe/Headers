@interface PLProcessExitAggregator : NSObject <NSCopying>

@property unsigned int labelIdx;
@property unsigned int lastTTR;
@property unsigned char exitReasonNamespace;
@property unsigned long long exitReasonCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end

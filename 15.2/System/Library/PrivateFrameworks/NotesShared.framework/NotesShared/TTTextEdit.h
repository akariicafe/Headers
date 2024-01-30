@class NSUUID, NSDate;

@interface TTTextEdit : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, copy, nonatomic) NSUUID *replicaID;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)initWithAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithTimestamp:(id)a0 replicaID:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)localizedDescriptionForNote:(id)a0;

@end

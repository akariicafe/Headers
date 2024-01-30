@interface _HDSyncAnchorRangeBox : NSObject <NSSecureCoding, NSCopying> {
    struct HDSyncAnchorRange { long long start; long long end; } _anchorRange;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithHDSyncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a0;
- (struct HDSyncAnchorRange { long long x0; long long x1; })anchorRange;

@end

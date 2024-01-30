@class NSValue, NSString;

@interface PDBuildMapKey : NSObject <NSCopying> {
    NSValue *mDrawableValue;
    NSString *mGroupId;
}

- (id)groupId;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setGroupId:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)drawable;
- (void)setDrawable:(id)a0;
- (id)initWithDrawable:(id)a0 groupId:(id)a1;

@end

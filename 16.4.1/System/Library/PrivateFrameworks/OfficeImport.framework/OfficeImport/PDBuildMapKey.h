@class NSValue, NSString;

@interface PDBuildMapKey : NSObject <NSCopying> {
    NSValue *mDrawableValue;
    NSString *mGroupId;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setGroupId:(id)a0;
- (id)groupId;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)drawable;
- (void)setDrawable:(id)a0;
- (id)initWithDrawable:(id)a0 groupId:(id)a1;

@end

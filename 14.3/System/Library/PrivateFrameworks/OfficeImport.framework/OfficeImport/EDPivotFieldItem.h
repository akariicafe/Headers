@interface EDPivotFieldItem : NSObject {
    BOOL mChildItems;
    BOOL mExpanded;
    BOOL mCalculatedMember;
    BOOL mMissed;
    BOOL mHidden;
    BOOL mDetailsHidden;
    int mType;
    unsigned long long mItemIndex;
}

+ (id)pivotFieldItem;

- (void)setExpanded:(BOOL)a0;
- (BOOL)childItems;
- (id)init;
- (BOOL)hidden;
- (void)setItemIndex:(unsigned long long)a0;
- (BOOL)expanded;
- (void)setType:(int)a0;
- (BOOL)missed;
- (void)setHidden:(BOOL)a0;
- (void)setChildItems:(BOOL)a0;
- (id)description;
- (int)type;
- (unsigned long long)itemIndex;
- (void)setMissed:(BOOL)a0;
- (BOOL)calculatedMember;
- (void)setCalculatedMember:(BOOL)a0;
- (BOOL)detailsHidden;
- (void)setDetailsHidden:(BOOL)a0;

@end

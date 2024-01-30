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

- (BOOL)expanded;
- (BOOL)hidden;
- (unsigned long long)itemIndex;
- (void)setExpanded:(BOOL)a0;
- (BOOL)missed;
- (BOOL)childItems;
- (id)description;
- (void)setHidden:(BOOL)a0;
- (id)init;
- (void)setItemIndex:(unsigned long long)a0;
- (int)type;
- (void)setChildItems:(BOOL)a0;
- (void)setType:(int)a0;
- (void)setMissed:(BOOL)a0;
- (BOOL)calculatedMember;
- (void)setCalculatedMember:(BOOL)a0;
- (BOOL)detailsHidden;
- (void)setDetailsHidden:(BOOL)a0;

@end

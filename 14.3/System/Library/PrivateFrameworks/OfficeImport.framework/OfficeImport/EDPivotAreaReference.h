@interface EDPivotAreaReference : NSObject {
    BOOL mByPosition;
    BOOL mRelative;
    BOOL mSelected;
    unsigned long long mFieldId;
    unsigned long long mCount;
}

+ (id)pivotAreaReference;

- (id)init;
- (void)setCount:(unsigned long long)a0;
- (void)setSelected:(BOOL)a0;
- (unsigned long long)fieldId;
- (id)description;
- (unsigned long long)count;
- (BOOL)selected;
- (void)setFieldId:(unsigned long long)a0;
- (BOOL)relative;
- (void)setRelative:(BOOL)a0;
- (BOOL)byPosition;
- (void)setByPosition:(BOOL)a0;

@end

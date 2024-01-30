@interface EDPivotAreaReference : NSObject {
    BOOL mByPosition;
    BOOL mRelative;
    BOOL mSelected;
    unsigned long long mFieldId;
    unsigned long long mCount;
}

+ (id)pivotAreaReference;

- (void)setSelected:(BOOL)a0;
- (void)setCount:(unsigned long long)a0;
- (BOOL)selected;
- (unsigned long long)count;
- (id)init;
- (id)description;
- (unsigned long long)fieldId;
- (void)setFieldId:(unsigned long long)a0;
- (BOOL)relative;
- (BOOL)byPosition;
- (void)setByPosition:(BOOL)a0;
- (void)setRelative:(BOOL)a0;

@end

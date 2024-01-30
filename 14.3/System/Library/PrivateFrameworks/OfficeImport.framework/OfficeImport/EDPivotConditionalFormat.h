@class EDCollection;

@interface EDPivotConditionalFormat : NSObject {
    unsigned long long mPriority;
    int mType;
    int mScope;
    EDCollection *mPivotAreas;
}

+ (id)pivotConditionalFormat;

- (void)setPriority:(unsigned long long)a0;
- (int)scope;
- (void)setScope:(int)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setType:(int)a0;
- (unsigned long long)priority;
- (id)description;
- (int)type;
- (id)pivotAreas;

@end

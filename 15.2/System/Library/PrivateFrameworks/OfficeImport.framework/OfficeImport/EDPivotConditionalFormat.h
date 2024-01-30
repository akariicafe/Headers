@class EDCollection;

@interface EDPivotConditionalFormat : NSObject {
    unsigned long long mPriority;
    int mType;
    int mScope;
    EDCollection *mPivotAreas;
}

+ (id)pivotConditionalFormat;

- (void)setScope:(int)a0;
- (void)setPriority:(unsigned long long)a0;
- (int)scope;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)priority;
- (id)init;
- (int)type;
- (void)setType:(int)a0;
- (id)pivotAreas;

@end

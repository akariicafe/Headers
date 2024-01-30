@class EDCollection;

@interface EDPivotConditionalFormat : NSObject {
    unsigned long long mPriority;
    int mType;
    int mScope;
    EDCollection *mPivotAreas;
}

+ (id)pivotConditionalFormat;

- (void)setScope:(int)a0;
- (int)scope;
- (void)setPriority:(unsigned long long)a0;
- (unsigned long long)priority;
- (int)type;
- (void)setType:(int)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)pivotAreas;

@end

@class NSString;

@interface EDPivotPageField : NSObject {
    unsigned long long mFieldId;
    NSString *mCap;
    NSString *mName;
}

+ (id)pivotPageField;

- (id)init;
- (void)setName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (unsigned long long)fieldId;
- (void)setFieldId:(unsigned long long)a0;
- (id)cap;
- (void)setCap:(id)a0;

@end

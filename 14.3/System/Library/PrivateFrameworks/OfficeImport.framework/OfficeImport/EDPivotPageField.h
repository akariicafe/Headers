@class NSString;

@interface EDPivotPageField : NSObject {
    unsigned long long mFieldId;
    NSString *mCap;
    NSString *mName;
}

+ (id)pivotPageField;

- (void)setName:(id)a0;
- (id)cap;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)fieldId;
- (id)description;
- (id)name;
- (void)setFieldId:(unsigned long long)a0;
- (void)setCap:(id)a0;

@end

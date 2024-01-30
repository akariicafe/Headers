@class NSString;

@interface EDPivotPageField : NSObject {
    unsigned long long mFieldId;
    NSString *mCap;
    NSString *mName;
}

+ (id)pivotPageField;

- (id)cap;
- (unsigned long long)fieldId;
- (void)setName:(id)a0;
- (id)description;
- (void)setFieldId:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)name;
- (void)setCap:(id)a0;

@end

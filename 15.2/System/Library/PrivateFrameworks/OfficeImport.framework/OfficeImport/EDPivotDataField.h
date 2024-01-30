@class NSString;

@interface EDPivotDataField : NSObject {
    long long mBaseField;
    unsigned long long mBaseItem;
    unsigned long long mFieldId;
    unsigned long long mNumFmtId;
    NSString *mName;
    int mFormat;
}

+ (id)pivotDataField;

- (unsigned long long)fieldId;
- (void)setName:(id)a0;
- (id)description;
- (void)setFieldId:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)name;
- (unsigned long long)baseItem;
- (void)setBaseItem:(unsigned long long)a0;
- (unsigned long long)numFmtId;
- (void)setNumFmtId:(unsigned long long)a0;
- (long long)baseField;
- (void)setBaseField:(long long)a0;
- (int)showDataAs;
- (void)setShowDataAs:(int)a0;

@end

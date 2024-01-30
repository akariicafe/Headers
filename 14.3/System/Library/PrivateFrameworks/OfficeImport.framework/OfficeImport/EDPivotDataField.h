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

- (void)setName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)fieldId;
- (id)description;
- (id)name;
- (unsigned long long)baseItem;
- (void)setFieldId:(unsigned long long)a0;
- (void)setBaseItem:(unsigned long long)a0;
- (unsigned long long)numFmtId;
- (void)setNumFmtId:(unsigned long long)a0;
- (long long)baseField;
- (void)setBaseField:(long long)a0;
- (int)showDataAs;
- (void)setShowDataAs:(int)a0;

@end

@class EDResources, CHDDataValuesCollection, CHDFormula;

@interface CHDData : NSObject {
    CHDDataValuesCollection *mDataValues;
    CHDFormula *mFormula;
    unsigned long long mContentFormatId;
    unsigned long long mDataValueIndexCount;
    EDResources *mResources;
}

+ (id)dataWithDataPointCount:(unsigned long long)a0 resources:(id)a1;
+ (id)dataWithResources:(id)a0;

- (id)initWithResources:(id)a0;
- (id)description;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)formula;
- (void)setContentFormatId:(unsigned long long)a0;
- (void)setFormula:(id)a0 chart:(id)a1;
- (id)dataValues;
- (void)setDataValueIndexCount:(unsigned long long)a0;
- (id)contentFormat;
- (void)setContentFormat:(id)a0;
- (unsigned long long)contentFormatId;
- (id)initWithDataPointCount:(unsigned long long)a0 resources:(id)a1;
- (unsigned long long)countOfCellsBeingReferenced;
- (unsigned long long)dataValueIndexCount;
- (struct CGPoint { double x0; double x1; })minMaxValues;
- (unsigned long long)averageDataPointDecimalCount;
- (id)firstValueContentFormatWithWorkbook:(id)a0;

@end

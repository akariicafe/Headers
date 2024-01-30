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

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)initWithResources:(id)a0;
- (id)description;
- (id)formula;
- (unsigned long long)contentFormatId;
- (id)contentFormat;
- (id)dataValues;
- (void)setContentFormatId:(unsigned long long)a0;
- (void)setFormula:(id)a0 chart:(id)a1;
- (void)setDataValueIndexCount:(unsigned long long)a0;
- (void)setContentFormat:(id)a0;
- (id)initWithDataPointCount:(unsigned long long)a0 resources:(id)a1;
- (unsigned long long)countOfCellsBeingReferenced;
- (unsigned long long)dataValueIndexCount;
- (struct CGPoint { double x0; double x1; })minMaxValues;
- (unsigned long long)averageDataPointDecimalCount;
- (id)firstValueContentFormatWithWorkbook:(id)a0;

@end

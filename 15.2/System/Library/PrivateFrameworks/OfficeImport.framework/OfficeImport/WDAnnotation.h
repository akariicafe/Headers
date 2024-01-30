@class WDAnnotationData, WDCharacterRun;

@interface WDAnnotation : WDRun {
    int mType;
    WDCharacterRun *mReference;
    BOOL mReferencePopertiesFixed;
    WDAnnotationData *mData;
    WDAnnotation *mOtherEndOfRangedAnnotation;
}

@property BOOL isResolved;
@property WDAnnotation *parent;

- (void)setOwner:(id)a0;
- (id)reference;
- (id)description;
- (int)annotationType;
- (id)date;
- (void).cxx_destruct;
- (id)owner;
- (id)text;
- (void)setDate:(id)a0;
- (id)data;
- (int)runType;
- (BOOL)referencePropertiesFixed;
- (void)setReferencePropertiesFixed;
- (void)setOtherEndOfRangedAnnotation:(id)a0;
- (void)useDataFromOtherEnd;
- (id)otherEndOfRangedAnnotation;
- (id)initWithParagraph:(id)a0 type:(int)a1;
- (id)paragraphIds;
- (unsigned long long)lastParagraphId;

@end

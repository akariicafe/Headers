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

- (void).cxx_destruct;
- (id)owner;
- (id)data;
- (id)text;
- (id)date;
- (void)setOwner:(id)a0;
- (id)description;
- (void)setDate:(id)a0;
- (id)reference;
- (int)runType;
- (int)annotationType;
- (BOOL)referencePropertiesFixed;
- (void)setReferencePropertiesFixed;
- (void)setOtherEndOfRangedAnnotation:(id)a0;
- (void)useDataFromOtherEnd;
- (id)otherEndOfRangedAnnotation;
- (id)initWithParagraph:(id)a0 type:(int)a1;
- (id)paragraphIds;
- (unsigned long long)lastParagraphId;

@end

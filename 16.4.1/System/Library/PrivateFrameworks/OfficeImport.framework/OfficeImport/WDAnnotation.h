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

- (id)owner;
- (void)setOwner:(id)a0;
- (id)data;
- (void)setDate:(id)a0;
- (id)text;
- (id)date;
- (id)description;
- (id)reference;
- (void).cxx_destruct;
- (int)annotationType;
- (unsigned long long)lastParagraphId;
- (int)runType;
- (id)initWithParagraph:(id)a0 type:(int)a1;
- (id)otherEndOfRangedAnnotation;
- (id)paragraphIds;
- (BOOL)referencePropertiesFixed;
- (void)setOtherEndOfRangedAnnotation:(id)a0;
- (void)setReferencePropertiesFixed;
- (void)useDataFromOtherEnd;

@end

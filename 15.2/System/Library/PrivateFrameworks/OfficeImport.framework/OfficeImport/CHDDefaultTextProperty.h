@class NSString, EDResources, EDRunsCollection;

@interface CHDDefaultTextProperty : NSObject <EDKeyedObject> {
    EDResources *mResources;
    int mDefaultTextType;
    unsigned long long mContentFormatId;
    EDRunsCollection *mRuns;
    int mLabelPosition;
    BOOL mShowCategoryLabel;
    BOOL mShowValueLabel;
    BOOL mShowPercentageLabel;
    BOOL mShowSeriesLabel;
    BOOL mShowBubbleSizeLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultTextPropertyWithResources:(id)a0;

- (int)labelPosition;
- (id)initWithResources:(id)a0;
- (id)runs;
- (long long)key;
- (void).cxx_destruct;
- (void)setLabelPosition:(int)a0;
- (void)setContentFormatId:(unsigned long long)a0;
- (void)setRuns:(id)a0;
- (id)contentFormat;
- (void)setContentFormat:(id)a0;
- (unsigned long long)contentFormatId;
- (int)defaultTextType;
- (void)setDefaultTextType:(int)a0;
- (BOOL)isShowCategoryLabel;
- (void)setIsShowCategoryLabel:(BOOL)a0;
- (BOOL)isShowValueLabel;
- (void)setIsShowValueLabel:(BOOL)a0;
- (BOOL)isShowPercentageLabel;
- (void)setIsShowPercentageLabel:(BOOL)a0;
- (BOOL)isShowBubbleSizeLabel;
- (void)setIsShowBubbleSizeLabel:(BOOL)a0;
- (BOOL)isShowSeriesLabel;
- (void)setIsShowSeriesLabel:(BOOL)a0;

@end

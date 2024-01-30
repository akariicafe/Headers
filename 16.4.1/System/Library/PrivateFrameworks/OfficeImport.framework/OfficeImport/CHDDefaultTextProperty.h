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

- (long long)key;
- (int)labelPosition;
- (void)setLabelPosition:(int)a0;
- (void).cxx_destruct;
- (id)initWithResources:(id)a0;
- (unsigned long long)contentFormatId;
- (int)defaultTextType;
- (id)contentFormat;
- (BOOL)isShowBubbleSizeLabel;
- (BOOL)isShowCategoryLabel;
- (BOOL)isShowPercentageLabel;
- (BOOL)isShowSeriesLabel;
- (BOOL)isShowValueLabel;
- (id)runs;
- (void)setContentFormat:(id)a0;
- (void)setContentFormatId:(unsigned long long)a0;
- (void)setDefaultTextType:(int)a0;
- (void)setIsShowBubbleSizeLabel:(BOOL)a0;
- (void)setIsShowCategoryLabel:(BOOL)a0;
- (void)setIsShowPercentageLabel:(BOOL)a0;
- (void)setIsShowSeriesLabel:(BOOL)a0;
- (void)setIsShowValueLabel:(BOOL)a0;
- (void)setRuns:(id)a0;

@end

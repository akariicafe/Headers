@class NSNumber, NSDate;
@protocol PXUserDefaultsDataSource, PXZoomablePhotosUserDefaults;

@interface PXUserDefaults : NSObject

@property (class, readonly, nonatomic) PXUserDefaults *standardUserDefaults;

@property (readonly, nonatomic) id<PXZoomablePhotosUserDefaults> curatedLibraryUserDefaults;
@property (readonly, nonatomic) id<PXZoomablePhotosUserDefaults> photosGridsUserDefaults;
@property (readonly, weak, nonatomic) id<PXUserDefaultsDataSource> dataSource;
@property (copy, nonatomic) NSNumber *curatedLibraryZoomLevel;
@property (copy, nonatomic) NSNumber *daysMarginScale;
@property (copy, nonatomic) NSNumber *allPhotosCaptionsVisible;
@property (copy, nonatomic) NSNumber *allPhotosColumns;
@property (copy, nonatomic) NSNumber *allPhotosPreferredIndividualItemsColumns;
@property (copy, nonatomic) NSNumber *allPhotosAspectFit;
@property (copy, nonatomic) NSNumber *allPhotosAspectFitInCompact;
@property (copy, nonatomic) NSNumber *photosGridColumns;
@property (copy, nonatomic) NSNumber *photosGridPreferredIndividualItemsColumns;
@property (copy, nonatomic) NSNumber *photosGridAspectFit;
@property (copy, nonatomic) NSNumber *photosGridAspectFitInCompact;
@property (copy, nonatomic) NSNumber *didShowCurationFooter;
@property (copy, nonatomic) NSNumber *didShowCompletedCurationFooterAnimation;
@property (copy, nonatomic) NSNumber *lastRadarPromptAnsweredQuestionCount;
@property (copy, nonatomic) NSDate *lastSurveyQuestionsRadarPromptDate;
@property (copy, nonatomic) NSDate *surveyQuestionsHideDate;
@property (copy, nonatomic) NSNumber *axExposeAllVisibleElements;

- (id)initWithDataSource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setNumberOfAnsweredQuestionsFromLastRadarPrompt:(id)a0;
- (void)setallPhotosAspectFitInCompact:(id)a0;
- (void)setSurveyQuestionsRadarPromptDate:(id)a0;

@end

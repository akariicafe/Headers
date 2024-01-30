@interface PXStoryChapterSettings : PXSettings

@property (nonatomic) long long chapterCollectionProducerKind;
@property (nonatomic) long long dummyChaptersDayInterval;
@property (nonatomic) long long dummyChaptersCountInterval;
@property (nonatomic) BOOL dummyChaptersIncludeSubtitles;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end

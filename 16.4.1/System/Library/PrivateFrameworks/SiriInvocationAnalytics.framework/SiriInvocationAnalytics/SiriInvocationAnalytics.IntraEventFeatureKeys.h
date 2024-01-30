@class NSString;

@interface SiriInvocationAnalytics.IntraEventFeatureKeys : NSObject

@property (class, nonatomic, readonly) NSString *APP_LAUNCH_IS_STARTING_KEY;
@property (class, nonatomic, readonly) NSString *APP_LAUNCH_BUNDLE_ID_KEY;
@property (class, nonatomic, readonly) NSString *APP_LAUNCH_LAUNCH_REASON_KEY;
@property (class, nonatomic, readonly) NSString *APP_LAUNCH_LAUNCH_TYPE_KEY;
@property (class, nonatomic, readonly) NSString *SIRI_UI_IS_STARTING_KEY;
@property (class, nonatomic, readonly) NSString *SIRI_UI_DIMISSAL_REASON_KEY;
@property (class, nonatomic, readonly) NSString *SIRI_UI_VIEW_MODE_KEY;
@property (class, nonatomic, readonly) NSString *NOW_PLAYING_GENRE_KEY;
@property (class, nonatomic, readonly) NSString *NOW_PLAYING_ARTIST_KEY;
@property (class, nonatomic, readonly) NSString *NOW_PLAYING_ALBUM_KEY;
@property (class, nonatomic, readonly) NSString *NOW_PLAYING_MEDIA_TYPE_KEY;
@property (class, nonatomic, readonly) NSString *NOW_PLAYING_BUNDLE_ID_KEY;
@property (class, nonatomic, readonly) NSString *NOW_PLAYING_TITLE_KEY;
@property (class, nonatomic, readonly) NSString *NOW_PLAYING_ELAPSED_KEY;
@property (class, nonatomic, readonly) NSString *NOW_PLAYING_DURATION_KEY;
@property (class, nonatomic, readonly) NSString *NOW_PLAYING_PLAYBACK_STATE_KEY;
@property (class, nonatomic, readonly) NSString *USER_STATUS_CHANGE_CHANGE_TYPE_KEY;
@property (class, nonatomic, readonly) NSString *USER_STATUS_CHANGE_IDS_HANDLES_KEY;
@property (class, nonatomic, readonly) NSString *SLEEP_MODE_CHANGE_REASON_KEY;
@property (class, nonatomic, readonly) NSString *SLEEP_MODE_STATE_KEY;
@property (class, nonatomic, readonly) NSString *SLEEP_MODE_EXPECTED_END_DATE_KEY;
@property (class, nonatomic, readonly) NSString *SIRI_EXECUTION_APP_BUNDLE_ID_KEY;
@property (class, nonatomic, readonly) NSString *SIRI_EXECUTION_INTENT_NAME_KEY;
@property (class, nonatomic, readonly) NSString *SIRI_EXECUTION_SLOT_VALUE_KEY;
@property (class, nonatomic, readonly) NSString *SIRI_EXECUTION_STATUS_REASON_KEY;
@property (class, nonatomic, readonly) NSString *POI_CATEGORY_KEY;
@property (class, nonatomic, readonly) NSString *TEXT_INPUT_BUNDLE_ID_KEY;
@property (class, nonatomic, readonly) NSString *TEXT_INPUT_DATE_INTERVAL_KEY;
@property (class, nonatomic, readonly) NSString *SEMANTIC_LOCATION_PLACE_TYPE_KEY;
@property (class, nonatomic, readonly) NSString *SEMANTIC_LOCATION_STARTING_KEY;
@property (class, nonatomic, readonly) NSString *SEMANTIC_LOCATION_USER_SPECIFIC_KEY;
@property (class, nonatomic, readonly) NSString *READ_MESSAGE_IDS_HANDLE_KEY;
@property (class, nonatomic, readonly) NSString *NOTIFICATION_BUNDLE_ID_KEY;
@property (class, nonatomic, readonly) NSString *NOTIFICATION_SECTION_ID_KEY;
@property (class, nonatomic, readonly) NSString *NOTIFICATION_USAGE_TYPE_KEY;
@property (class, nonatomic, readonly) NSString *CARPLAY_IS_STARTING_KEY;
@property (class, nonatomic, readonly) NSString *CARPLAY_REASON_KEY;

- (id)init;
- (void).cxx_destruct;

@end

@class VNSceneprint, NSArray, NSSet, NSString, CLLocation, NSDateComponents, NSDate;

@interface CLSTestInvestigationItem : NSObject <CLSInvestigationItem>

@property (retain, nonatomic) CLLocation *clsLocation;
@property (retain, nonatomic) NSArray *clsPeopleNames;
@property (copy, nonatomic) NSSet *clsSceneClassifications;
@property (readonly, nonatomic) long long clsViewCount;
@property (readonly, nonatomic) long long clsPlayCount;
@property (readonly, nonatomic) long long clsShareCount;
@property (readonly, nonatomic) BOOL clsIsUtility;
@property (readonly, nonatomic) NSDateComponents *cls_localDateComponents;
@property (retain, nonatomic) NSDate *cls_universalDate;
@property (readonly, nonatomic) NSDate *cls_localDate;
@property (nonatomic) double clsContentScore;
@property (readonly, nonatomic) NSArray *clsUnprefetchedPeopleNames;
@property (readonly, nonatomic) unsigned long long clsPeopleCount;
@property (readonly, nonatomic) NSString *clsIdentifier;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSArray *peopleNames;
@property (readonly, nonatomic) double clsExposureScore;
@property (readonly, nonatomic) double clsSharpnessScore;
@property (readonly, nonatomic) double clsAestheticScore;
@property (readonly, nonatomic) double clsHighlightVisibilityScore;
@property (readonly, nonatomic) double clsAutoplaySuggestionScore;
@property (readonly, nonatomic) double clsFaceScore;
@property (readonly, nonatomic) BOOL clsIsScreenshotOrScreenRecording;
@property (readonly, nonatomic) BOOL isFavorite;
@property (readonly, nonatomic) BOOL isVideo;
@property (readonly, nonatomic) BOOL clsIsAestheticallyPrettyGood;
@property (readonly, nonatomic) BOOL clsIsBlurry;
@property (readonly, nonatomic) BOOL clsIsLoopOrBounce;
@property (readonly, nonatomic) BOOL clsIsLongExposure;
@property (readonly, nonatomic) BOOL clsIsInterestingVideo;
@property (readonly, nonatomic) BOOL clsIsInterestingLivePhoto;
@property (readonly, nonatomic) BOOL clsIsInterestingPanorama;
@property (readonly, nonatomic) BOOL clsIsInterestingSDOF;
@property (readonly, nonatomic) BOOL clsIsInterestingHDR;
@property (readonly, nonatomic) BOOL clsHasInterestingAudioClassification;
@property (readonly, nonatomic) BOOL clsHasCustomPlaybackVariation;
@property (readonly, nonatomic) BOOL clsIsNonMemorable;
@property (readonly, nonatomic) double clsDuration;
@property (readonly, nonatomic) BOOL clsIsInterestingReframe;
@property (readonly, nonatomic) VNSceneprint *clsSceneprint;
@property (readonly) BOOL clsIsInhabited;
@property (readonly) BOOL clsAvoidIfPossibleForKeyItem;
@property (readonly) BOOL clsHasPoorResolution;
@property (readonly) BOOL clsHasInterestingScenes;
@property (readonly, nonatomic) double clsSquareCropScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } pl_coordinate;
@property (readonly, nonatomic) double pl_gpsHorizontalAccuracy;
@property (readonly, nonatomic) NSDate *pl_date;
@property (readonly, nonatomic) NSString *pl_uuid;

+ (id)itemWithPeopleNames:(id)a0 universalDate:(id)a1 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a2;
+ (id)itemWithUniversalDate:(id)a0 sceneClassifications:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (double)scoreInContext:(id)a0;

@end

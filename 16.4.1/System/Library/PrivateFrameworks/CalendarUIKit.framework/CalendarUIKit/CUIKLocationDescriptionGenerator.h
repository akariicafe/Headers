@interface CUIKLocationDescriptionGenerator : NSObject

+ (BOOL)_conferenceURL:(id)a0 isSameAsLocationString:(id)a1;
+ (id)conferenceURLForEvent:(id)a0 options:(unsigned long long)a1;
+ (id)locationStringForLocation:(id)a0 locationWithoutPrediction:(id)a1 preferredLocation:(id)a2 conferenceURL:(id)a3 options:(unsigned long long)a4;
+ (id)locationStringForEvent:(id)a0 options:(unsigned long long)a1;
+ (id)locationStringForEvent:(id)a0 options:(unsigned long long)a1 incomplete:(BOOL *)a2;
+ (id)conferenceStringForURL:(id)a0 options:(unsigned long long)a1;
+ (id)labelForLocation:(id)a0;
+ (id)glyphNamesForConferenceString:(id)a0;
+ (id)locationStringForLocation:(id)a0 locationWithoutPrediction:(id)a1 preferredLocation:(id)a2 conferenceURL:(id)a3 options:(unsigned long long)a4 incomplete:(BOOL *)a5;
+ (id)locationStringForLocation:(id)a0 locationWithoutPrediction:(id)a1 preferredLocation:(id)a2 conferenceURL:(id)a3;
+ (id)locationStringForEvent:(id)a0;
+ (id)conferenceStringForURL:(id)a0 options:(unsigned long long)a1 incomplete:(BOOL *)a2;
+ (id)_conferenceStringForURL:(id)a0 options:(unsigned long long)a1 outImageNames:(id *)a2 incomplete:(BOOL *)a3;
+ (id)_locationStringsRemovingVirtualConference:(id)a0 event:(id)a1;

@end

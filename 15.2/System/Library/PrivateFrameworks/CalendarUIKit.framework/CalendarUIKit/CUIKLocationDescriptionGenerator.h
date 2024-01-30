@interface CUIKLocationDescriptionGenerator : NSObject

+ (id)locationStringForLocation:(id)a0 locationWithoutPrediction:(id)a1 preferredLocation:(id)a2 conferenceURL:(id)a3 options:(unsigned long long)a4;
+ (id)locationStringForLocation:(id)a0 locationWithoutPrediction:(id)a1 preferredLocation:(id)a2 conferenceURL:(id)a3;
+ (id)locationStringForEvent:(id)a0 options:(unsigned long long)a1;
+ (id)locationStringForEvent:(id)a0;
+ (id)conferenceURLForEvent:(id)a0 options:(unsigned long long)a1;
+ (id)labelForLocation:(id)a0;
+ (BOOL)_conferenceURL:(id)a0 isSameAsLocationString:(id)a1;
+ (id)conferenceStringForURL:(id)a0 options:(unsigned long long)a1;
+ (id)_conferenceStringForURL:(id)a0 options:(unsigned long long)a1 outImageNames:(id *)a2;
+ (id)glyphNamesForConferenceString:(id)a0;

@end

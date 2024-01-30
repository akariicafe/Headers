@interface ConferenceDatatypeConverter : NSObject

+ (id)_calJoinMethodFromEKJoinMethod:(id)a0;
+ (id)_ekJoinMethodFromCalJoinMethod:(id)a0;
+ (id)_calJoinMethodsFromEKJoinMethods:(id)a0;
+ (unsigned long long)_calSourceFromEKSource:(unsigned long long)a0;
+ (id)_ekJoinMethodsFromCalJoinMethods:(id)a0;
+ (unsigned long long)_ekSourceFromCalSource:(unsigned long long)a0;
+ (id)_ekVirtualConferenceFromCalVirtualConference:(id)a0;
+ (id)calVirtualConferenceFromEKVirtualConference:(id)a0;
+ (id)ekDeserializationResultFromCalDeserializationResult:(id)a0;

@end

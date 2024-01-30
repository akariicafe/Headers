@interface EKUIFacetimeManager : NSObject

+ (id)faceTimeURLForType:(unsigned long long)a0 withHandles:(id)a1;
+ (void)startFaceTime:(unsigned long long)a0 withParticipants:(id)a1;
+ (BOOL)canFaceTime:(unsigned long long)a0 withContacts:(id)a1;
+ (BOOL)canFaceTime:(unsigned long long)a0 withParticipants:(id)a1;
+ (BOOL)faceTimeAvailable:(unsigned long long)a0;
+ (id)faceTimeURLForType:(unsigned long long)a0 andHandle:(id)a1;
+ (id)faceTimeURLForType:(unsigned long long)a0 withContacts:(id)a1;
+ (id)faceTimeURLForType:(unsigned long long)a0 withParticipants:(id)a1;
+ (id)handlesForContacts:(id)a0;
+ (id)handlesForParticipants:(id)a0;
+ (id)preferredHandleForContact:(id)a0 withDefaultPhoneNumber:(id)a1 emailAddress:(id)a2;
+ (void)startFaceTime:(unsigned long long)a0 withContacts:(id)a1;

@end

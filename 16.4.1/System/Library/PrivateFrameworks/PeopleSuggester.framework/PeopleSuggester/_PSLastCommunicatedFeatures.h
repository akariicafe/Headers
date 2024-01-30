@interface _PSLastCommunicatedFeatures : NSObject

+ (int)bucketFromTimeInterval:(double)a0;
+ (long long)countMatchingRecipientsForInteraction:(id)a0 recipientIdentifierSet:(id)a1 recipientPersonIdSet:(id)a2;
+ (id)featureValueFromTimeInterval:(double)a0;
+ (id)findCandidateInteractionInCaches:(id)a0 caches:(id)a1 direction:(id)a2 mechanisms:(id)a3;
+ (id)lastCommunicationFromCandidates:(id)a0 direction:(id)a1 mechanisms:(id)a2 caches:(id)a3;
+ (id)lastInteractionFromCandidate:(id)a0 caches:(id)a1 direction:(id)a2 mechanisms:(id)a3;
+ (id)recipientDetailsFromContact:(id)a0;
+ (double)timeIntervalSinceNowForInteraction:(id)a0;

@end

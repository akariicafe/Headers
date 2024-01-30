@interface PGPeopleInferencesConveniences : NSObject

+ (id)momentNodesAtHomeInMomentNodes:(id)a0;
+ (BOOL)isValidContact:(id)a0;
+ (id)momentNodesAtWorkInMomentNodes:(id)a0;
+ (BOOL)anyPersonNodes:(id)a0 belongToBestSocialGroupsInGraph:(id)a1;
+ (id)countedPersonNodesFromMomentNodes:(id)a0 amongPersonNodes:(id)a1;
+ (id)momentNodesByAddressNodeFromMomentNodes:(id)a0;
+ (id)personLocalIdentifierByContactIdentifierFromPersonNodes:(id)a0;
+ (BOOL)signalInRunOptions:(unsigned long long)a0 signal:(unsigned long long)a1;
+ (BOOL)socialGroupNodes:(id)a0 intersectWithBestSocialGroupsInGraph:(id)a1;
+ (id)topPersonNodeIdentifierForTwoPersonSocialGroupsFromPersonNodes:(id)a0 personNodes:(id)a1;

@end

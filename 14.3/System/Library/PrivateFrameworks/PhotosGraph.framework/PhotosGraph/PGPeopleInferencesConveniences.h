@interface PGPeopleInferencesConveniences : NSObject

+ (BOOL)isValidContact:(id)a0;
+ (BOOL)signalInRunOptions:(unsigned long long)a0 signal:(unsigned long long)a1;
+ (id)momentNodesLinkedToPersonNodes:(id)a0;
+ (id)personLocalIdentifierByContactIdentifierFromPersonNodes:(id)a0;
+ (id)personCountedSetFromMomentNodes:(id)a0 amongPersonNodes:(id)a1;
+ (id)momentNodesbyAddressNodeFromMomentNodes:(id)a0;
+ (id)momentsAtWorkForMomentNodes:(id)a0;
+ (id)momentsAtHomeForMomentNodes:(id)a0;
+ (id)_momentsAtHomeOrWorkForMomentNodes:(id)a0 atHome:(BOOL)a1 atWork:(BOOL)a2;
+ (id)topPersonLocalIdentifierFor2PersonSocialGroupsInGraph:(id)a0 personNodes:(id)a1;
+ (id)possibleUserLocalesFromGraph:(id)a0;

@end

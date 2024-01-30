@interface PVPersonDeduperSocialGroupOverlaps : PVPersonDeduperStep

- (id)name;
- (void)dedupePersons:(id)a0 withOtherPersons:(id)a1 updateBlock:(id /* block */)a2 resultBlock:(id /* block */)a3;
- (BOOL)isPersonSimilar:(id)a0 withOtherPerson:(id)a1 withDistance:(float)a2 minAgeType:(unsigned short)a3;
- (void)mergePersons:(id)a0 otherPersonLocalIdentifiers:(id)a1 personsFetchResult:(id)a2 mergeSocialGroupPersonIdentifiers:(id)a3;
- (id)metricsKey;

@end

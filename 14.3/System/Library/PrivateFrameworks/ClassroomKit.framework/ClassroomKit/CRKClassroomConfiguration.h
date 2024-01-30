@interface CRKClassroomConfiguration : NSObject

+ (id)configurationSource;
+ (void)fetchConfiguration:(id /* block */)a0;
+ (void)setConfiguration:(id)a0 completion:(id /* block */)a1;
+ (id)setOfActiveRestrictionUUIDs:(id)a0;

@end

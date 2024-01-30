@class NSArray, NSNumber;

@interface HFAccessoryProfileGroup : NSObject

@property (readonly, copy, nonatomic) NSArray *profiles;
@property (readonly, copy, nonatomic) NSNumber *groupIdentifier;

+ (id)groupProfiles:(id)a0 options:(id)a1;
+ (id)_groupProfilesKeyedByIdentifier:(id)a0 options:(id)a1;
+ (id)_groupIdentifierForProfile:(id)a0 options:(id)a1;
+ (id)_hashCombiningHashes:(id)a0;

- (void).cxx_destruct;
- (id)initWithProfiles:(id)a0 groupIdentifier:(id)a1;

@end

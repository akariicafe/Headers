@class NSString, NSSet;

@interface FCConfigurableFeedGroupInsertionDescriptor : NSObject <FCFeedGroupInsertionDescriptor>

@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, copy, nonatomic) NSSet *precedingSourceIdentifiers;
@property (readonly, nonatomic) unsigned long long firstGroupMinPrecedingTopicGroups;
@property (readonly, nonatomic) unsigned long long minPrecedingTopicGroups;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)wantsToInsertGroupInContext:(id)a0;
- (id)initWithSourceIdentifier:(id)a0 precedingSourceIdentifiers:(id)a1 firstGroupMinPrecedingTopicGroups:(unsigned long long)a2 minPrecedingTopicGroups:(unsigned long long)a3;

@end

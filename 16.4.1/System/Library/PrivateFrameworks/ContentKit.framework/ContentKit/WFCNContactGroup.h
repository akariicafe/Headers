@class NSArray, CNGroup;

@interface WFCNContactGroup : WFContactGroup

@property (retain, nonatomic) NSArray *cachedMembers;
@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) CNGroup *group;

+ (id)allContactGroups;
+ (id)contactGroupWithCNGroup:(id)a0;

- (void).cxx_destruct;
- (id)name;
- (BOOL)containsContact:(id)a0;
- (id)initWithCNGroup:(id)a0;

@end

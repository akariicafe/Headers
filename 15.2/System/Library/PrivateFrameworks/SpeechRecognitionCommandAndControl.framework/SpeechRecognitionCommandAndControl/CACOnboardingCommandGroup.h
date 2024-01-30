@class NSString, NSArray;

@interface CACOnboardingCommandGroup : NSObject

@property (retain, nonatomic) NSString *groupTitle;
@property (retain, nonatomic) NSArray *commands;

+ (id)groupWithIdentifier:(id)a0;
+ (id)groupsFromIdentifiers:(id)a0;
+ (id)allCommandGroups;

- (void).cxx_destruct;
- (id)initWithGroupTitle:(id)a0 commands:(id)a1;

@end

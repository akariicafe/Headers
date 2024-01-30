@interface _EARPeopleSuggesterConfig : NSObject

@property (readonly, nonatomic) unsigned int contactsCount;
@property (readonly, nonatomic) unsigned int bestContactsCount;
@property (readonly, nonatomic) unsigned int bestContactsBonus;

- (id)initWithContactsCount:(unsigned int)a0 bestContactsCount:(unsigned int)a1 bestContactsBonus:(unsigned int)a2;

@end

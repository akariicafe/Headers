@class NSString, NSArray;

@interface CNAccountsAndGroupsSection : NSObject

@property (copy, nonatomic) id /* block */ titleProvider;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isAllContactsGlobalSection;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end

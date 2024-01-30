@class NSString, NSArray;

@interface CNContactCardFieldSection : NSObject

@property (readonly, nonatomic) NSString *sectionType;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSString *displayTitle;

- (void).cxx_destruct;
- (id)initWithSectionType:(id)a0 items:(id)a1;
- (id)initWithSectionType:(id)a0 items:(id)a1 displayTitle:(id)a2;

@end

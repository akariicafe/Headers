@class NSArray, GDPersonNameComponents, NSDateComponents;

@interface GDPersonViewPerson : GDPerson

@property (readonly, nonatomic) NSArray *names;
@property (readonly, nonatomic) GDPersonNameComponents *nameComponents;
@property (readonly, nonatomic) NSDateComponents *dateOfBirth;
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSArray *emails;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL isFavorite;

- (id)description;

@end

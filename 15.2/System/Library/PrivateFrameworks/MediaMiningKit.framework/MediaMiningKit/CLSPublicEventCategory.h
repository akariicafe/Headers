@class NSString, NSArray;

@interface CLSPublicEventCategory : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSString *musicConcerts;
@property (class, readonly, nonatomic) NSString *nightLife;
@property (class, readonly, nonatomic) NSString *theater;
@property (class, readonly, nonatomic) NSString *dance;
@property (class, readonly, nonatomic) NSString *festivalsAndFairs;
@property (class, readonly, nonatomic) NSString *artsAndMuseums;
@property (class, readonly, nonatomic) NSString *sports;
@property (class, readonly, nonatomic) NSString *businessAndTechnology;
@property (class, readonly, nonatomic) NSString *community;
@property (class, readonly, nonatomic) NSString *educational;
@property (class, readonly, nonatomic) NSString *familyEvents;
@property (class, readonly, nonatomic) NSString *tours;
@property (class, readonly, nonatomic) NSString *appleEvents;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSArray *localizedSubcategories;
@property (readonly, nonatomic) NSString *category;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCategory:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)levelForLocalizedSubcategory:(id)a0;

@end

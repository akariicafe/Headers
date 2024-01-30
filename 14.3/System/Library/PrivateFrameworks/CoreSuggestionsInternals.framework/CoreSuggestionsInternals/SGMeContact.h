@class NSString, NSSet, CNContact;

@interface SGMeContact : NSObject {
    CNContact *_meContact;
}

@property (readonly, nonatomic) NSString *givenName;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) NSString *formattedName;
@property (readonly, nonatomic) NSSet *emailAddresses;
@property (readonly, nonatomic) NSSet *phoneNumbers;
@property (readonly, nonatomic) NSSet *postalAddresses;

+ (id)keysToFetch;

- (id)initWithContact:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSameAsOrUnifiedWithContact:(id)a0;

@end

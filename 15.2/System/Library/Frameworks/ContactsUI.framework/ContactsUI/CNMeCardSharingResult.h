@class NSString, CNContactImage;

@interface CNMeCardSharingResult : NSObject

@property (readonly, nonatomic) NSString *givenName;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) CNContactImage *contactImage;
@property (readonly, nonatomic) BOOL didSaveImageToMeCard;

- (id)initWithGivenName:(id)a0 familyName:(id)a1 contactImage:(id)a2 didSaveImageToMeCard:(BOOL)a3;
- (id)description;
- (void).cxx_destruct;

@end

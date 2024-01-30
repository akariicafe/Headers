@class NSString, NSData;

@interface CNSharingProfileOnboardingFlowResult : NSObject

@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) unsigned long long sharingAudience;
@property (nonatomic) BOOL didPersistImageToContact;

- (void).cxx_destruct;
- (id)description;

@end

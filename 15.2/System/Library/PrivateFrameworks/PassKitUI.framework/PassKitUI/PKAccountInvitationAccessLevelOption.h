@class UIImage, NSString;

@interface PKAccountInvitationAccessLevelOption : NSObject

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *secondarySubtitle;
@property (readonly, nonatomic) unsigned long long accessLevel;

- (void).cxx_destruct;
- (id)initWithAccessLevel:(unsigned long long)a0;

@end

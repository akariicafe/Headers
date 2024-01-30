@class UIImage, NSString;

@interface PKAccountInvitationAccessLevelContentConfiguration : NSObject <UIContentConfiguration>

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *secondarySubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)updatedConfigurationForState:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)makeContentView;
- (void).cxx_destruct;
- (id)initWithAccessLevelOption:(id)a0;
- (BOOL)isEqualToAccountInvitationAccessLevelContentConfiguration:(id)a0;

@end

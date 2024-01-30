@class NSString;

@interface PXCMMSharedAlbumParticipant : NSObject <PXCMMInvitationParticipant, NSCopying>

@property (readonly, nonatomic) NSString *emailAddressString;
@property (readonly, nonatomic) NSString *phoneNumberString;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

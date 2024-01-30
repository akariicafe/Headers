@class UIColor, NSString, CNContact, PKPassShare, UIImage;
@protocol NSCopying;

@interface ShareRowItem : NSObject <PKIdentifiable>

@property (nonatomic) BOOL isAddShareItem;
@property (nonatomic) BOOL isStopSharingItem;
@property (retain, nonatomic) PKPassShare *share;
@property (nonatomic) BOOL showContactAvatar;
@property (nonatomic) BOOL hasFetchedContact;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (nonatomic) BOOL shouldCenterText;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

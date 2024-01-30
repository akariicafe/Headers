@class NSDictionary, PLGenericAlbum;

@interface PLInvitationRecordsChangeNotification : PLContainerChangeNotification {
    BOOL _invitationRecordsDidChange;
    NSDictionary *_userInfo;
}

@property (readonly, nonatomic) PLGenericAlbum *album;
@property (readonly, nonatomic) BOOL invitationRecordsDidChange;

+ (id)notificationWithAlbum:(id)a0 snapshot:(id)a1;

- (void)_calculateDiffs;
- (id)userInfo;
- (void).cxx_destruct;
- (id)name;

@end

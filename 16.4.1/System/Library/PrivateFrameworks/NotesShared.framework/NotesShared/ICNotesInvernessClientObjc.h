@class NSString;

@interface ICNotesInvernessClientObjc : NSObject {
    void /* unknown type, empty encoding */ localURLString;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ container;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ environment;
@property (nonatomic, readonly) NSString *localURLString;

- (id)init;
- (void).cxx_destruct;
- (void)didCompleteInstallOrUpdateWithPreviousBuildNumber:(id)a0 previousVersion:(id)a1 currentBuildNumber:(id)a2 currentVersion:(id)a3 platformName:(id)a4 continuationToken:(id)a5 callback:(id /* block */)a6;
- (id)initWithContainer:(id)a0 environment:(long long)a1 localURLString:(id)a2;
- (void)runGarbageCollectorWithProgress:(id)a0 callback:(id /* block */)a1;
- (void)sendMentionNotificationWithRecipientUserId:(id)a0 senderName:(id)a1 noteTitle:(id)a2 mentionSnippet:(id)a3 shareRecordName:(id)a4 shareOwnerUserId:(id)a5 noteRecordName:(id)a6 inlineAttachmentRecordName:(id)a7 callback:(id /* block */)a8;

@end

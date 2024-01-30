@class ICNote, NSString, NSArray, NSManagedObjectContext, NSDictionary, NSObject, ICAttachment, CKShare;
@protocol OS_dispatch_queue;

@interface ICDrawingHashtagsAndMentionsController : NSObject <PKAttachmentViewHashtagsAndMentionsDelegate> {
    NSObject<OS_dispatch_queue> *_contactsRequestQueue;
}

@property (weak, nonatomic) ICAttachment *attachment;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) ICNote *note;
@property (readonly, nonatomic) CKShare *share;
@property (readonly, nonatomic) NSArray *eligibleShareParticipants;
@property (copy, nonatomic) NSDictionary *mentionTokensForParticipants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAttachment:(id)a0;
- (id)allConfirmedHashtagsForAttachmentView:(id)a0;
- (id)allConfirmedMentionsForAttachmentView:(id)a0;
- (void)allPossibleParticipantNameTokensForAttachmentView:(id)a0 completion:(id /* block */)a1;
- (id)attachmentView:(id)a0 participantMatchesForMentionText:(id)a1;
- (void)attachmentView:(id)a0 userConfirmedHashtagWithUUID:(id)a1 displayText:(id)a2;
- (void)attachmentView:(id)a0 userConfirmedMentionWithUUID:(id)a1 participantIdentifier:(id)a2;
- (void)attachmentView:(id)a0 userDeletedHashtagWithUUID:(id)a1;
- (void)attachmentView:(id)a0 userDeletedMentionWithUUID:(id)a1;
- (void)fetchMentionTokensForParticipants:(id)a0 completion:(id /* block */)a1;

@end

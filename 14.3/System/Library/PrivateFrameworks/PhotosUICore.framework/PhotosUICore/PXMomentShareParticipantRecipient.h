@class PHShareParticipant;

@interface PXMomentShareParticipantRecipient : PXRecipient

@property (readonly, nonatomic) PHShareParticipant *momentShareParticipant;

- (void).cxx_destruct;
- (id)initWithContact:(id)a0 address:(id)a1 nameComponents:(id)a2 recipientKind:(long long)a3;
- (id)initWithMomentShareParticipant:(id)a0;

@end

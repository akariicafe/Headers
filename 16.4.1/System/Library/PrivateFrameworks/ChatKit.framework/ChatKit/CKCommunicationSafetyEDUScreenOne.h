@class NSSet, NSArray, NSIndexPath, CKComposition;
@protocol CKCommunicationSafetyEDUScreenProtocol;

@interface CKCommunicationSafetyEDUScreenOne : CKCommunicationSafetyEDUScreen

@property (readonly, nonatomic) BOOL isYoungAgeGroup;
@property (readonly, nonatomic) BOOL isSending;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) CKComposition *composition;
@property (readonly, nonatomic) NSSet *sensitiveMediaObjects;
@property (readonly, nonatomic) NSArray *identifiersOfShelvedImages;
@property (weak, nonatomic) id<CKCommunicationSafetyEDUScreenProtocol> delegate;

- (void).cxx_destruct;
- (void)_acceptButtonPressed;
- (void)_messageButtonPressed;
- (void)_notNowButtonPressed;
- (void)addButtonsToTray;
- (void)configureFirstReceiveScreen;
- (void)configureFirstSendScreen;
- (id)initFirstReceivingEDUScreenWithItemIndexPath:(id)a0;
- (id)initFirstSendingEDUScreenWithComposition:(id)a0 withSensitiveMediaObjects:(id)a1 withIdentifiersOfShelvedImages:(id)a2;

@end

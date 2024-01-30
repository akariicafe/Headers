@class NSSet, NSArray, NSIndexPath, CKComposition;
@protocol CKCommunicationSafetyEDUScreenProtocol;

@interface CKCommunicationSafetyEDUScreenTwo : CKCommunicationSafetyEDUScreen

@property (readonly, nonatomic) BOOL isYoungAgeGroup;
@property (readonly, nonatomic) BOOL isSending;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) CKComposition *composition;
@property (readonly, nonatomic) NSSet *sensitiveMediaObjects;
@property (readonly, nonatomic) NSArray *identifiersOfShelvedImages;
@property (weak, nonatomic) id<CKCommunicationSafetyEDUScreenProtocol> delegate;

- (void)configureSecondSendScreen;
- (void)configureSecondReceiveScreen;
- (void).cxx_destruct;
- (id)initSecondSendingEDUScreenWithComposition:(id)a0 withSensitiveMediaObjects:(id)a1 withIdentifiersOfShelvedImages:(id)a2;
- (void)addButtonsToTray;
- (void)_notNowButtonPressed;
- (void)_acceptButtonPressed;
- (id)initSecondReceivingEDUScreenWithItemIndexPath:(id)a0;
- (void)_messageButtonPressed;

@end

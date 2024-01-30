@class SUManagerClient, NSUUID, NSString, SUAutoInstallForecast;
@protocol SUAutoInstallOperationDelegate;

@interface SUAutoInstallOperation : NSObject <SUAutoInstallOperationClientHandler, NSSecureCoding> {
    SUManagerClient *_client;
    BOOL _clientOwned;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) id<SUAutoInstallOperationDelegate> delegate;
@property (readonly, retain, nonatomic) SUAutoInstallForecast *forecast;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic, getter=isCanceled) BOOL canceled;
@property (nonatomic) int agreementStatus;
@property (readonly, retain, nonatomic) NSUUID *id;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)cancel;
- (id)_initWithClient:(id)a0 clientOwned:(BOOL)a1 id:(id)a2 forecast:(id)a3 agreementStatus:(int)a4 cancelled:(BOOL)a5 expired:(BOOL)a6;
- (BOOL)_isEffectivelyScheduled;
- (BOOL)_isValidForScheduling;
- (BOOL)_isValidTillDate:(id)a0;
- (BOOL)_isDateExpired:(id)a0;
- (void)_noteAutoInstallOperationWasCancelled;
- (void)_noteAutoInstallOperationDidExpireWithError:(id)a0;
- (void)_noteAutoInstallOperationDidConsent;
- (void)_noteAutoInstallOperationIsReadyToInstall:(id /* block */)a0;
- (void)_noteAutoInstallOperationPasscodePolicyChanged:(unsigned long long)a0;
- (id)initWithAutoInstallOperationModel:(id)a0 client:(id)a1;

@end

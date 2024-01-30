@class NSString, CDPContext;
@protocol CDPDRecoveryKeyValidatorInternalDelegate;

@interface CDPDRecoveryKeyValidatorImpl : NSObject <CDPRecoveryKeyValidatorInternal> {
    CDPContext *_context;
    id<CDPDRecoveryKeyValidatorInternalDelegate> _delegate;
}

@property (nonatomic) BOOL recoveryKeyVerified;
@property (copy, nonatomic) NSString *recoveryKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

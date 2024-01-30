@class NSString, CDPContext;
@protocol CDPStateUIProviderInternal;

@interface CDPDBackupErrorProviderImpl : NSObject <CDPDBackupRecoveryErrorProvider> {
    CDPContext *_context;
    id<CDPStateUIProviderInternal> _uiProvider;
    unsigned long long _prevailingSecret;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 uiProvider:(id)a1;
- (void)setPrevailingSecret:(unsigned long long)a0;
- (id)recordNotFoundErrorWithUnderlyingError:(id)a0;
- (id)verficationFailedErrorwithUnderlyingError:(id)a0;
- (BOOL)supportsErrorPresentation;
- (id)cooldownErrorWithUnderlyingError:(id)a0;
- (void)handleSoftLimitError:(id)a0 completion:(id /* block */)a1;
- (id)globalHardLimitError;
- (void)handleHardLimitError:(id)a0 completion:(id /* block */)a1;
- (id)globalHardLimitErrorWithRecord:(id)a0;
- (id)hardLimitErrorForRecord:(id)a0;

@end

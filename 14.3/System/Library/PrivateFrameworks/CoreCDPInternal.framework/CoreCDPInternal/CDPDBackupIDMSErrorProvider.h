@interface CDPDBackupIDMSErrorProvider : CDPDBackupErrorProviderImpl

- (id)recordNotFoundErrorWithUnderlyingError:(id)a0;
- (BOOL)supportsErrorPresentation;
- (id)cooldownErrorWithUnderlyingError:(id)a0;
- (void)handleSoftLimitError:(id)a0 completion:(id /* block */)a1;
- (id)globalHardLimitError;
- (void)handleHardLimitError:(id)a0 completion:(id /* block */)a1;
- (id)globalHardLimitErrorWithRecord:(id)a0;
- (id)hardLimitErrorForRecord:(id)a0;

@end

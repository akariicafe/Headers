@interface CDPDBackupIDMSErrorProvider : CDPDBackupErrorProviderImpl

- (id)globalHardLimitErrorWithRecord:(id)a0;
- (id)cooldownErrorWithUnderlyingError:(id)a0;
- (id)globalHardLimitError;
- (void)handleHardLimitError:(id)a0 completion:(id /* block */)a1;
- (void)handleSoftLimitError:(id)a0 completion:(id /* block */)a1;
- (id)hardLimitErrorForRecord:(id)a0;
- (id)recordNotFoundErrorWithUnderlyingError:(id)a0;
- (BOOL)supportsErrorPresentation;

@end

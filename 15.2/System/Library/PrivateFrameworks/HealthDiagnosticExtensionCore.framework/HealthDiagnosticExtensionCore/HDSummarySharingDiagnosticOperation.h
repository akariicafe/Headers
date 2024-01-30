@interface HDSummarySharingDiagnosticOperation : HDDiagnosticOperation

- (void)run;
- (id)reportFilename;
- (void)_reportHeaderWithProfileIdentifiers:(id)a0;
- (void)_reportDiagnosticsForProfileIdentifier:(id)a0;
- (void)_reportInvitationsForPrimaryProfile;
- (void)_reportProfileInformationForProfileIdentifier:(id)a0;
- (void)_reportSharedSummariesForProfileIdentifier:(id)a0;

@end

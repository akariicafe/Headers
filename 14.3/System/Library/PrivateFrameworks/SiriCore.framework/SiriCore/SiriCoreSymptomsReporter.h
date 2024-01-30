@interface SiriCoreSymptomsReporter : NSObject

+ (id)sharedInstance;

- (void)reportIssueForError:(id)a0 type:(long long)a1 subtype:(id)a2 context:(id)a3 processIdentifier:(int)a4 walkboutStatus:(BOOL)a5 triggerForIDSIdentifiers:(id)a6;
- (void)reportIssueForError:(id)a0 type:(long long)a1 subtype:(id)a2 context:(id)a3 processIdentifier:(int)a4 walkboutStatus:(BOOL)a5 triggerForIDSIdentifiers:(id)a6 withPcap:(BOOL)a7;
- (id)_processNameForPid:(int)a0;
- (void)_getTypeForError:(id)a0 completion:(id /* block */)a1;
- (void)reportIssueForType:(id)a0 subType:(id)a1 context:(id)a2 processIdentifier:(int)a3 walkboutStatus:(BOOL)a4 withPcap:(BOOL)a5;
- (id)_subtypeContextStringFromContext:(id)a0;
- (void)reportIssueForError:(id)a0 type:(long long)a1 context:(id)a2 processIdentifier:(int)a3 walkboutStatus:(BOOL)a4 triggerForIDSIdentifiers:(id)a5;
- (void)reportIssueForType:(id)a0 subType:(id)a1 context:(id)a2 processIdentifier:(int)a3 walkboutStatus:(BOOL)a4;

@end

@interface SiriCoreSymptomsReporter : NSObject

+ (id)sharedInstance;

- (void)reportIssueForType:(id)a0 subType:(id)a1 context:(id)a2 processIdentifier:(int)a3 walkboutStatus:(BOOL)a4;
- (void)_getTypeForError:(id)a0 completion:(id /* block */)a1;
- (id)_processNameForPid:(int)a0;
- (id)_subtypeContextStringFromContext:(id)a0;
- (void)reportIssueForError:(id)a0 type:(long long)a1 context:(id)a2 processIdentifier:(int)a3 walkboutStatus:(BOOL)a4 triggerForIDSIdentifiers:(id)a5;
- (void)reportIssueForError:(id)a0 type:(long long)a1 subtype:(id)a2 context:(id)a3 processIdentifier:(int)a4 walkboutStatus:(BOOL)a5 triggerForIDSIdentifiers:(id)a6;
- (void)reportIssueForError:(id)a0 type:(long long)a1 subtype:(id)a2 context:(id)a3 processIdentifier:(int)a4 walkboutStatus:(BOOL)a5 triggerForIDSIdentifiers:(id)a6 withPcap:(BOOL)a7;
- (void)reportIssueForType:(id)a0 subType:(id)a1 context:(id)a2 processIdentifier:(int)a3 walkboutStatus:(BOOL)a4 withPcap:(BOOL)a5;

@end

@interface DAIMAPNotesAccount : DAAccount

@property (nonatomic, setter=setIMAPNotesAccountVersion:) int imapNotesAccountVersion;

- (id)onBehalfOfBundleIdentifier;
- (BOOL)isEqualToAccount:(id)a0;

@end

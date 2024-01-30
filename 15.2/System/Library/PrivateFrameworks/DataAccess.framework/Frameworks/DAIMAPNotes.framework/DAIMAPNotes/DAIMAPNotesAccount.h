@interface DAIMAPNotesAccount : DAAccount

@property (nonatomic, setter=setIMAPNotesAccountVersion:) int imapNotesAccountVersion;

- (BOOL)isEqualToAccount:(id)a0;
- (id)onBehalfOfBundleIdentifier;

@end

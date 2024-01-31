@class NSNumber;

@interface CNContactToggleBlockCallerAction : CNContactAction

@property (retain, nonatomic) NSNumber *isBlockedCachedValue;

- (void).cxx_destruct;
- (id)allNumbersAndEmails;
- (id)checkIsContactBlocked;
- (BOOL)isContactBlockedPreservingChanges:(BOOL)a0;
- (void)performActionWithSender:(id)a0;
- (void)setContactBlocked:(BOOL)a0;

@end

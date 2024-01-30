@class NSNumber;

@interface CNContactToggleBlockCallerAction : CNContactAction

@property (retain, nonatomic) NSNumber *isBlockedCachedValue;

- (id)allNumbersAndEmails;
- (void)setContactBlocked:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isContactBlockedPreservingChanges:(BOOL)a0;
- (id)checkIsContactBlocked;
- (void)performActionWithSender:(id)a0;

@end

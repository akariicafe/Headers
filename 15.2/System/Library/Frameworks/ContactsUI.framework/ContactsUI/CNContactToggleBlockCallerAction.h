@class NSNumber;

@interface CNContactToggleBlockCallerAction : CNContactAction

@property (retain, nonatomic) NSNumber *isBlockedCachedValue;

- (void)performActionWithSender:(id)a0;
- (id)checkIsContactBlocked;
- (id)allNumbersAndEmails;
- (void)setContactBlocked:(BOOL)a0;
- (BOOL)isContactBlockedPreservingChanges:(BOOL)a0;
- (void).cxx_destruct;

@end

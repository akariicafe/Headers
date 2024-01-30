@class NSArray;

@interface TUPrivacyManager : NSObject

@property (class, readonly, nonatomic) TUPrivacyManager *sharedPrivacyManager;

@property (readonly, copy, nonatomic) NSArray *privacyRules;

- (BOOL)isIncomingCommunicationBlockedForBusinessID:(id)a0;
- (BOOL)isIncomingCommunicationBlockedForHandle:(id)a0;
- (void)addRule:(id)a0;
- (void)setBlockIncomingCommunication:(BOOL)a0 forEmailAddress:(id)a1;
- (id)allBlacklistRules;
- (void)_handleBlockListChanged:(id)a0;
- (id)init;
- (void)removeRule:(id)a0;
- (BOOL)isIncomingCommunicationBlockedForEmailAddress:(id)a0;
- (BOOL)isIncomingCommunicationBlockedForPhoneNumber:(id)a0;
- (void)setBlockIncomingCommunication:(BOOL)a0 forBusinessID:(id)a1;
- (void)setBlockIncomingCommunication:(BOOL)a0 forPhoneNumber:(id)a1;
- (void)dealloc;

@end

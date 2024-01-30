@class NSString, GKGameInternal, NSDate;

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal {
    NSString *_status;
    NSDate *_lastPlayedDate;
    GKGameInternal *_lastPlayedGame;
}

+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;

- (void)setStatus:(id)a0;
- (void)dealloc;
- (id)lastPlayedGame;
- (id)lastPlayedDate;
- (void)setLastPlayedDate:(id)a0;
- (id)status;
- (BOOL)isFriend;
- (int)defaultFamiliarity;
- (void)setLastPlayedGame:(id)a0;

@end

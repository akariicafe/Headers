@class NSString, GKGameInternal, NSDate;

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal {
    NSString *_status;
    NSDate *_lastPlayedDate;
    GKGameInternal *_lastPlayedGame;
}

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (BOOL)isFriend;
- (id)status;
- (void)setStatus:(id)a0;
- (void).cxx_destruct;
- (id)lastPlayedDate;
- (void)setLastPlayedDate:(id)a0;
- (int)defaultFamiliarity;
- (id)lastPlayedGame;
- (void)setLastPlayedGame:(id)a0;

@end

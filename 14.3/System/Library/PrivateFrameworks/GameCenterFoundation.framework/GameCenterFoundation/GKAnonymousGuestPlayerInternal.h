@class NSString, GKPlayerInternal;

@interface GKAnonymousGuestPlayerInternal : GKPlayerInternal {
    NSString *_guestIdentifier;
}

@property (retain, nonatomic) GKPlayerInternal *hostPlayerInternal;

+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;

- (id)playerID;
- (void)dealloc;
- (BOOL)isGuestPlayer;
- (id)initWithHostPlayerInternal:(id)a0 guestIdentifier:(id)a1;
- (id)guestIdentifier;
- (void)setGuestIdentifier:(id)a0;

@end

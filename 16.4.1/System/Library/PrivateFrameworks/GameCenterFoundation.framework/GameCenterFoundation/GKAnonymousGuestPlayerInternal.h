@class NSString, GKPlayerInternal;

@interface GKAnonymousGuestPlayerInternal : GKPlayerInternal {
    NSString *_guestIdentifier;
}

@property (retain, nonatomic) GKPlayerInternal *hostPlayerInternal;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (id)playerID;
- (void).cxx_destruct;
- (BOOL)isGuestPlayer;
- (id)guestIdentifier;
- (id)initWithHostPlayerInternal:(id)a0 guestIdentifier:(id)a1;
- (void)setGuestIdentifier:(id)a0;

@end

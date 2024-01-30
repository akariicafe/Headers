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
- (id)initWithHostPlayerInternal:(id)a0 guestIdentifier:(id)a1;
- (id)guestIdentifier;
- (void)setGuestIdentifier:(id)a0;

@end

@class NSString;

@interface FBSDisplayIdentity : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    long long _type;
    unsigned int _displayID;
    unsigned int _connectionSeed;
    NSString *_uniqueIdentifier;
    FBSDisplayIdentity *_rootIdentity;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isSecure) BOOL secure;
@property (readonly, nonatomic) int pid;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *rootIdentity;
@property (readonly, nonatomic) BOOL isRootIdentity;
@property (readonly, nonatomic, getter=isMainDisplay) BOOL mainDisplay;
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly, nonatomic, getter=isCarDisplay) BOOL carDisplay;
@property (readonly, nonatomic, getter=isCarInstrumentsDisplay) BOOL carInstrumentsDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (BOOL)isMusicOnlyDisplay;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithType:(long long)a0 displayID:(unsigned int)a1 connectionSeed:(unsigned int)a2 pid:(int)a3 external:(BOOL)a4 uniqueIdentifier:(id)a5 secure:(BOOL)a6 root:(id)a7;
- (id)uniqueIdentifier;
- (unsigned int)displayID;
- (unsigned int)connectionSeed;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isRestrictedAirPlayDisplay;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;
- (BOOL)isAirPlayDisplay;
- (BOOL)expectsSecureRendering;
- (BOOL)isMainRootDisplay;
- (BOOL)isiPodOnlyDisplay;

@end

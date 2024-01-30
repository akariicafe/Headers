@class NSString;

@interface FBSDisplayIdentity : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    NSString *_uniqueIdentifier;
    FBSDisplayIdentity *_rootIdentity;
    long long _type;
    long long _connectionType;
    unsigned int _displayID;
    unsigned int _connectionSeed;
    BOOL _secure;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isUIKitMainLike) BOOL UIKitMainLike;
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

- (unsigned int)connectionSeed;
- (unsigned int)displayID;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isAirPlayDisplay;
- (long long)connectionType;
- (BOOL)isRestrictedAirPlayDisplay;
- (id)initWithCoder:(id)a0;
- (BOOL)isMusicOnlyDisplay;
- (id)initWithXPCDictionary:(id)a0;
- (id)_initWithType:(long long)a0 UIKitMainLike:(BOOL)a1 displayID:(unsigned int)a2 connectionType:(long long)a3 connectionSeed:(unsigned int)a4 pid:(int)a5 external:(BOOL)a6 uniqueIdentifier:(id)a7 secure:(BOOL)a8 root:(id)a9;
- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isiPodOnlyDisplay;
- (id)init;
- (BOOL)isMainRootDisplay;
- (void).cxx_destruct;
- (BOOL)expectsSecureRendering;
- (id)uniqueIdentifier;

@end

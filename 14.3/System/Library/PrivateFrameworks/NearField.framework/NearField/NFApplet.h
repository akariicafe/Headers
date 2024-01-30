@class NSString, NSArray, NSData, NSObject;
@protocol NFAppletCollection;

@interface NFApplet : NSObject <NSSecureCoding> {
    NSString *_groupHeadID;
    NSArray *_groupMemberIDs;
    NSArray *_referencedAppIDs;
    BOOL _isContainer;
    BOOL _isProxy;
    NSString *_packageIdentifier;
    NSString *_moduleIdentifier;
    NSArray *_multiSEApplicationGroupMemberIDs;
    unsigned char _appletGPState;
    unsigned char _groupActivationStyle;
    NSObject<NFAppletCollection> *_appletCollection;
    NSData *_typeFSystemCode;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) NSString *seIdentifier;
@property (readonly, retain, nonatomic) NSData *identifierAsData;
@property (readonly, retain, nonatomic) NSData *discretionaryData;
@property (readonly, retain, nonatomic) NSString *packageIdentifier;
@property (readonly, nonatomic) unsigned char family;
@property (readonly, nonatomic) unsigned char lifecycleState;
@property (readonly, nonatomic) unsigned char activationState;
@property (readonly, nonatomic) BOOL authTransientSupport;
@property (readonly, retain, nonatomic) NFApplet *groupHead;
@property (readonly, retain, nonatomic) NSArray *groupMembers;
@property (readonly, retain, nonatomic) NSArray *referencedApps;
@property (readonly, nonatomic) BOOL authTransientConfigurable;
@property (readonly, nonatomic) BOOL isTypeF;
@property (readonly, nonatomic) BOOL suppressTypeB;
@property (readonly, nonatomic) unsigned char supportedTypeFSystem;
@property (readonly, nonatomic) BOOL isGPLocked;
@property (readonly, nonatomic) BOOL containsSubKeys;

- (BOOL)isContainer;
- (BOOL)isPPSEControllable;
- (BOOL)isProxy;
- (id)appletCollection;
- (id)groupMemberIDs;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)groupHeadID;
- (BOOL)isEqualToApplet:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)moduleIdentifier;
- (void)_setIsActive:(BOOL)a0;
- (id)description;
- (void)setAppletCollection:(id)a0;
- (id)multiSEGroupMemberIDs;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)rawGPState;
- (id)initWithDictionary:(id)a0;
- (id)multiSSDMembers;
- (unsigned char)groupActivationStyle;
- (void)encodeWithCoder:(id)a0;

@end

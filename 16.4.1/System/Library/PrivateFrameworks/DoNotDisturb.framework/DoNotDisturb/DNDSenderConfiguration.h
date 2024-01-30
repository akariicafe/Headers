@class DNDBypassSettings, NSMutableSet;

@interface DNDSenderConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSMutableSet *allowedContactTypes;
@property (readonly, copy, nonatomic) NSMutableSet *deniedContactTypes;
@property (readonly, copy, nonatomic) NSMutableSet *allowedContactGroups;
@property (readonly, copy, nonatomic) NSMutableSet *deniedContactGroups;
@property (readonly, copy, nonatomic) NSMutableSet *allowedContacts;
@property (readonly, copy, nonatomic) NSMutableSet *deniedContacts;
@property (readonly, copy, nonatomic) DNDBypassSettings *phoneCallBypassSettings;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithAllowedContactTypes:(id)a0 deniedContactTypes:(id)a1 allowedContactGroups:(id)a2 deniedContactGroups:(id)a3 allowedContacts:(id)a4 deniedContacts:(id)a5 phoneCallBypassSettings:(id)a6;
- (id)_descriptionForRedacted:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_evaluatedBypassSettings:(id)a0;
- (id)_redactedDescriptionsForContacts:(id)a0;
- (void)diffAgainstObject:(id)a0 usingDiffBuilder:(id)a1 withDescription:(id)a2;

@end

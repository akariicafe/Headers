@class CNGroup, NSString, NSData, NSDate;

@interface CNMutableGroup : CNGroup

@property (copy, nonatomic) NSString *externalURI;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSData *externalRepresentation;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *externalUUID;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int iOSLegacyIdentifier;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) CNGroup *snapshot;
@property (copy, nonatomic) NSString *name;

- (id)externalIdentifier;
- (id)modificationDate;
- (id)identifier;
- (void)setCreationDate:(id)a0;
- (void)setExternalRepresentation:(id)a0;
- (id)externalRepresentation;
- (void)setExternalIdentifier:(id)a0;
- (void)setSnapshot:(id)a0;
- (id)freeze;
- (void)setName:(id)a0;
- (id)creationDate;
- (id)externalUUID;
- (int)iOSLegacyIdentifier;
- (void)adoptValuesFromAndSetSnapshot:(id)a0;
- (id)freezeWithSelfAsSnapshot;
- (void)setExternalUUID:(id)a0;
- (id)externalModificationTag;
- (void)setExternalModificationTag:(id)a0;
- (id)name;
- (id)copy;
- (void)setExternalURI:(id)a0;
- (void)setModificationDate:(id)a0;
- (void)setIOSLegacyIdentifier:(int)a0;
- (void)setIdentifier:(id)a0;

@end

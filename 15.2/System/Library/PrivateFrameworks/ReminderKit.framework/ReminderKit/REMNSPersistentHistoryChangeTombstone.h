@class NSDictionary;

@interface REMNSPersistentHistoryChangeTombstone : REMChangeTombstone

@property (retain) NSDictionary *persistentHistoryChangeTombstone;

+ (BOOL)supportsSecureCoding;

- (id)externalIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)shareeDisplayName;
- (id)daIsEventOnlyContainer;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)objectIdentifier;
- (id)shareeOwningListIdentifier;
- (id)shareeAddress;
- (id)assignmentOwningReminderIdentifier;
- (id)hashtagName;
- (id)hashtagReminderIdentifier;

@end

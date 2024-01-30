@class NSDictionary;

@interface REMNSPersistentHistoryChangeTombstone : REMChangeTombstone

@property (retain) NSDictionary *persistentHistoryChangeTombstone;

+ (BOOL)supportsSecureCoding;

- (id)externalIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)shareeDisplayName;
- (id)daIsEventOnlyContainer;
- (id)shareeOwningListIdentifier;
- (id)shareeAddress;
- (id)assignmentOwningReminderIdentifier;
- (id)objectIdentifier;
- (void)encodeWithCoder:(id)a0;

@end

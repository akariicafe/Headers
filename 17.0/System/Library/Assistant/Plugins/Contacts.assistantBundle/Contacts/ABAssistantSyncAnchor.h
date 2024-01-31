@class NSString;

@interface ABAssistantSyncAnchor : NSObject

@property (readonly, nonatomic) long long sequenceNumber;
@property (readonly, nonatomic) int contactLegacyIdentifier;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL shouldResetSync;
@property (readonly, nonatomic) BOOL shouldFullSync;
@property (readonly, nonatomic) BOOL shouldResumePreviousFullSync;
@property (readonly, nonatomic) BOOL shouldClearChangeHistoryForPreviouslySyncedContacts;

+ (id)anchorWithString:(id)a0 forContactStore:(id)a1;
+ (id)stringValueForFullSyncWithContactLegacyIdentifier:(int)a0;
+ (id)stringValueWithSequenceNumber:(long long)a0 contactLegacyIdentifier:(int)a1;

- (id)init;
- (id)shortDescription;
- (id)description;
- (void)resetSync;
- (id)initWithSequenceNumber:(long long)a0 contactLegacyIdentifier:(int)a1;
- (BOOL)isOlderThanAnchor:(id)a0;

@end

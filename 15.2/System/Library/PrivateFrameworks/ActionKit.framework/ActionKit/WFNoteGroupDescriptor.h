@class INSpeakableString, NSString;

@interface WFNoteGroupDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long managedLevel;
@property (readonly, nonatomic) INSpeakableString *speakableString;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;

+ (unsigned long long)managedLevelForNotesAccounts;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNoteGroupSpeakableString:(id)a0 accountIdentifier:(id)a1 managedLavel:(unsigned long long)a2;
- (id)initWithNoteGroupSpeakableString:(id)a0;
- (id)descriptorWithTargetAccountIdentifier:(id)a0 targetManagedLevel:(unsigned long long)a1;

@end

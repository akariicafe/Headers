@class NSString, INSpeakableString, WFContentAttribution;

@interface WFNoteGroupDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) unsigned long long managedLevel;
@property (readonly, nonatomic) INSpeakableString *speakableString;
@property (readonly, nonatomic) WFContentAttribution *targetContentAttribution;

+ (unsigned long long)managedLevelForNotesAccounts;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithNoteGroupSpeakableString:(id)a0 accountIdentifier:(id)a1 managedLavel:(unsigned long long)a2;
- (id)initWithNoteGroupSpeakableString:(id)a0;
- (id)descriptorWithTargetAccountIdentifier:(id)a0 targetManagedLevel:(unsigned long long)a1;

@end

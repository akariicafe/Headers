@class NSString, NSArray, NSURL, SLPerson, NSDate;

@interface SLAttribution : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (getter=isLean) BOOL lean;
@property (readonly, copy, nonatomic) NSString *sourceAppDisplayName;
@property (readonly, copy, nonatomic) NSString *conversationIdentifier;
@property (readonly, nonatomic, getter=isPinned) BOOL pinned;
@property (readonly, nonatomic) BOOL isGroupConversation;
@property (readonly, copy, nonatomic) NSURL *groupPhotoPath;
@property (readonly, copy, nonatomic) NSString *groupDisplayName;
@property (readonly, nonatomic) NSArray *relatedPersons;
@property (readonly, nonatomic) SLPerson *sender;
@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *attachmentGUID;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;

+ (id)errorForAttributionDomain:(id)a0 andCode:(long long)a1 andUnderlyingError:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithIdentifier:(id)a0 withError:(id *)a1;
- (id)initWithCSSearchableItem:(id)a0 error:(id *)a1;
- (id)initWithPortraitAttribution:(id)a0 withError:(id *)a1;
- (id)portraitAttribution;

@end

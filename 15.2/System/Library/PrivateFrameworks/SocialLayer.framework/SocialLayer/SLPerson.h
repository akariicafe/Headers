@class CNContactStore, NSString, CNContact, NSData;

@interface SLPerson : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CNContactStore *contactStore;
@property (copy, nonatomic) NSString *shortDisplayName;
@property (retain, nonatomic) NSData *thumbnailImageData;
@property (readonly, copy, nonatomic) NSString *handle;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) CNContact *contact;

+ (id)keysForCNContact;
+ (id)errorForPersonDomain:(id)a0 andCode:(long long)a1;
+ (id)createMutableContactWithHandle:(id)a0;
+ (id)predicateForHandle:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithHandle:(id)a0 displayName:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithPortraitPerson:(id)a0 withError:(id *)a1;
- (id)initWithCSPerson:(id)a0 error:(id *)a1;
- (id)fetchCNContactWithHandle:(id)a0;

@end

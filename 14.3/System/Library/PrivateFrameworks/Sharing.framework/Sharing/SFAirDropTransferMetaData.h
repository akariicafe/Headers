@class NSSet, NSString, NSDictionary, NSArray;

@interface SFAirDropTransferMetaData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long transferTypes;
@property (copy, nonatomic) NSSet *items;
@property (nonatomic) BOOL didAutoAccept;
@property (readonly, nonatomic) BOOL canAutoAccept;
@property (readonly, nonatomic, getter=isVerifiableIdentity) BOOL verifiableIdentity;
@property (readonly, nonatomic) BOOL senderIsMe;
@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSString *senderBundleID;
@property (readonly, copy, nonatomic) NSString *senderComputerName;
@property (readonly, copy, nonatomic) NSString *senderEmail;
@property (readonly, copy, nonatomic) NSString *senderEmailHash;
@property (readonly, copy, nonatomic) NSString *senderCompositeName;
@property (readonly, copy, nonatomic) NSString *senderFirstName;
@property (readonly, copy, nonatomic) NSString *senderLastName;
@property (readonly, copy, nonatomic) NSString *senderID;
@property (readonly, nonatomic) id senderIcon;
@property (readonly, nonatomic) id smallPreviewImage;
@property (readonly, nonatomic) id previewImage;
@property (readonly, copy, nonatomic) NSString *itemsDescription;
@property (readonly, copy, nonatomic) NSDictionary *itemsDescriptionAdvanced;
@property (readonly, copy, nonatomic) NSArray *rawFiles;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithInformation:(id)a0;
- (void)updateUsingCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setItemsDescription:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

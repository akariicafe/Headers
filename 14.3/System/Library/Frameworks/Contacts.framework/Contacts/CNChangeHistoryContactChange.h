@class CNChangeHistoryAnchor, NSArray, CNContact, NSString, NSNumber;

@interface CNChangeHistoryContactChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long changeType;
@property (retain, nonatomic) CNContact *contact;
@property (copy, nonatomic) NSArray *linkedContactIdentifiers;
@property (retain, nonatomic) CNChangeHistoryAnchor *changeAnchor;
@property (retain, nonatomic) NSNumber *changeID;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSNumber *imagesChanged;
@property (retain, nonatomic) NSString *externalURI;
@property (retain, nonatomic) NSString *externalModificationTag;
@property (readonly, nonatomic) NSString *contactIdentifier;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 changeType:(long long)a1 changeAnchor:(id)a2 changeID:(id)a3 externalID:(id)a4 imagesChanged:(id)a5;
- (id)initWithIdentifier:(id)a0 changeType:(long long)a1 changeAnchor:(id)a2 changeID:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end

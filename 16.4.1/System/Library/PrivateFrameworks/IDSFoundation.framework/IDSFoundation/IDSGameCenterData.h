@class NSString, NSNumber, NSDate;

@interface IDSGameCenterData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *contactsAssociationID;
@property (retain, nonatomic) NSNumber *contactsSharingState;
@property (retain, nonatomic) NSDate *contactsLastUpdatedDate;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualTo:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)compareAgainstData:(id)a0;
- (id)initWithAssociationID:(id)a0 sharingState:(id)a1 lastUpdatedDate:(id)a2;

@end

@class NSString, NSPersonNameComponents;

@interface CLSLocation : CLSObject <CLSContactsSearchable>

@property (copy, nonatomic) NSString *locationName;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic) long long sourceType;
@property BOOL isEditable;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *groupIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithLocationID:(id)a0 name:(id)a1;

@end

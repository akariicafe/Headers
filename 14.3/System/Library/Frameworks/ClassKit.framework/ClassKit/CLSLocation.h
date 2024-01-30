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

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end

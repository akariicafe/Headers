@class NSString;

@interface CommunicationFilterItem : NSObject

@property (readonly, nonatomic) struct __CFPhoneNumber { } *phoneNumber;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *unformattedID;

- (BOOL)matchesFilterItem:(id)a0;
- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithEmailAddress:(id)a0;
- (BOOL)_acceptVersion:(id)a0;
- (id)description;
- (id)initWithPhoneNumber:(struct __CFPhoneNumber { } *)a0;
- (id)dictionaryRepresentation;
- (id)_dictionaryRepresentationWithRedaction;
- (BOOL)isPhoneNumber;
- (BOOL)_acceptItemType:(id)a0;

@end

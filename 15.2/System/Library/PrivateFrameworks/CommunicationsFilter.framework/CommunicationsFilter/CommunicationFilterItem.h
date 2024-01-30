@class NSString;

@interface CommunicationFilterItem : NSObject

@property (readonly, nonatomic) struct __CFPhoneNumber { } *phoneNumber;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *unformattedID;

- (id)initWithPhoneNumber:(struct __CFPhoneNumber { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isPhoneNumber;
- (id)description;
- (BOOL)_acceptItemType:(id)a0;
- (id)_dictionaryRepresentationWithRedaction;
- (id)initWithEmailAddress:(id)a0;
- (void)dealloc;
- (BOOL)_acceptVersion:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)matchesFilterItem:(id)a0;

@end

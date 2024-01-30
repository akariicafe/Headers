@class NSString, NSPersonNameComponents;

@interface CNAutocompleteSupplementalRecipient : NSObject

@property (readonly, copy) NSString *address;
@property (readonly) long long addressType;
@property (readonly, copy) NSPersonNameComponents *nameComponents;

- (id)initWithNameComponents:(id)a0 address:(id)a1 addressType:(long long)a2;
- (void).cxx_destruct;

@end

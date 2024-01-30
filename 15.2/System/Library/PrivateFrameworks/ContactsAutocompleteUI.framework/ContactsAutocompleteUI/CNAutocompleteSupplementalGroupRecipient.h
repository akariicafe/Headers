@class NSString, NSArray;

@interface CNAutocompleteSupplementalGroupRecipient : NSObject

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSArray *members;

- (id)initWithIdentifier:(id)a0 title:(id)a1 members:(id)a2;
- (void).cxx_destruct;

@end

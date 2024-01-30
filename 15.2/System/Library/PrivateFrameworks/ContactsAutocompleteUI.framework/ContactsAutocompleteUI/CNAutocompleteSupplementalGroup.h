@class NSString, NSArray;

@interface CNAutocompleteSupplementalGroup : NSObject

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSArray *groupMembers;

- (id)initWithIdentifier:(id)a0 title:(id)a1 members:(id)a2;
- (void).cxx_destruct;

@end

@class NSString, NSHashTable;

@interface _HDAssertionRecord : NSObject

@property (readonly, copy, nonatomic) NSString *assertionIdentifier;
@property (readonly, nonatomic) NSHashTable *assertions;

- (void).cxx_destruct;
- (id)initWithAssertionIdentifier:(id)a0;

@end

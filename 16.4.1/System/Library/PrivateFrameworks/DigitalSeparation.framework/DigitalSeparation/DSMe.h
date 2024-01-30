@class NSString, NSSet;

@interface DSMe : NSObject

@property (copy, nonatomic) NSString *meCardIdentifier;
@property (copy, nonatomic) NSSet *emails;
@property (copy, nonatomic) NSSet *phoneNumbers;

- (id)init;
- (void).cxx_destruct;

@end

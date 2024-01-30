@class NSString, NSData, NSDate;

@interface ICContentKeyStoreEntry : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSData *keyData;
@property (copy, nonatomic) NSDate *renewalDate;
@property (nonatomic) unsigned long long failureCount;

- (id)initWithIdentifier:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;

@end

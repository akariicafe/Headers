@class NSString;

@interface SCLMutableContact : SCLContact

@property (copy, nonatomic) NSString *contactIdentifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *value;

- (void)setContactIdentifier:(id)a0;
- (void)setType:(unsigned long long)a0;
- (void)setValue:(id)a0;

@end

@class NSString;

@interface DNDMutableContactHandle : DNDContactHandle

@property (copy, nonatomic) NSString *contactIdentifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *value;

- (void)setValue:(id)a0;
- (void)setContactIdentifier:(id)a0;
- (void)setType:(unsigned long long)a0;

@end

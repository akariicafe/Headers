@interface CLSBinaryItem : CLSActivityItem {
    BOOL _value;
}

@property (nonatomic) long long valueType;
@property (nonatomic) BOOL value;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithIdentifier:(id)a0 title:(id)a1;
- (id)initWithIdentifier:(id)a0 title:(id)a1 type:(long long)a2;

@end

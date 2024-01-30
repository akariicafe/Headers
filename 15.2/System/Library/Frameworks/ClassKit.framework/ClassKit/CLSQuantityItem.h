@interface CLSQuantityItem : CLSActivityItem {
    double _quantity;
}

@property (nonatomic) double quantity;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithIdentifier:(id)a0 title:(id)a1;

@end

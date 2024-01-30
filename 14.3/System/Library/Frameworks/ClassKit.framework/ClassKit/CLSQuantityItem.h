@interface CLSQuantityItem : CLSActivityItem {
    double _quantity;
}

@property (nonatomic) double quantity;

+ (BOOL)supportsSecureCoding;

- (id)initWithIdentifier:(id)a0 title:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end

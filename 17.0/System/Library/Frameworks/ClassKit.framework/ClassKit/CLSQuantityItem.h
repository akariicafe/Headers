@interface CLSQuantityItem : CLSActivityItem {
    double _quantity;
}

@property (nonatomic) double quantity;

+ (BOOL)supportsSecureCoding;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1;

@end

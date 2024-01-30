@class NSString;
@protocol PXLabeledValueType;

@interface PXLabeledValue : NSObject <NSCopying>

@property (class, readonly) PXLabeledValue *separatorLabeledValue;

@property (readonly, nonatomic) id<PXLabeledValueType> value;
@property (readonly, nonatomic) NSString *localizedLabel;
@property (readonly, nonatomic, getter=isSeparator) BOOL separator;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)_initSeparator;
- (id)initWithValue:(id)a0 localizedLabel:(id)a1;
- (id)description;
- (BOOL)isEqualToLabeledValue:(id)a0;
- (BOOL)isEqual:(id)a0;

@end

@class NSString;

@interface GCControllerElementSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isCustomized) BOOL customized;
@property (readonly, nonatomic) NSString *mappingKey;
@property (copy, nonatomic) id /* block */ changedHandler;
@property (nonatomic) BOOL invertHorizontally;
@property (nonatomic) BOOL invertVertically;
@property (nonatomic) BOOL swapAxes;

- (void)setDefaultValues;
- (void)setDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithElementKey:(id)a0;
- (void)setDictionaryRepresentation:(id)a0 fromCoder:(BOOL)a1;

@end

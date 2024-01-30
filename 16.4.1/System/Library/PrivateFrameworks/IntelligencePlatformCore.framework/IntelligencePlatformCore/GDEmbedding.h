@class MLMultiArray, NSArray;

@interface GDEmbedding : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) MLMultiArray *value;
@property (copy) NSArray *ids;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 ids:(id)a1;
- (void)updateIdsArrayWithIdentifier:(id)a0;

@end

@class NSString;

@interface BWDeferredMetadataIntermediate : BWDeferredDictionaryIntermediate

@property (readonly, nonatomic) NSString *bufferTag;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithMetadata:(id)a0 tag:(id)a1 bufferTag:(id)a2 URL:(id)a3;

@end

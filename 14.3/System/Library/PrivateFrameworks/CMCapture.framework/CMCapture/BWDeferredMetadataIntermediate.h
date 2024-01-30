@class NSString;

@interface BWDeferredMetadataIntermediate : BWDeferredDictionaryIntermediate

@property (readonly, nonatomic) NSString *bufferTag;

+ (BOOL)supportsSecureCoding;

- (id)initWithMetadata:(id)a0 tag:(id)a1 bufferTag:(id)a2 URL:(id)a3;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

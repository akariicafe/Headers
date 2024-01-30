@class WFContextualActionMediaItemDescriptor;

@interface WFAddToMediaLibraryContextualAction : WFContextualAction

@property (readonly, nonatomic) WFContextualActionMediaItemDescriptor *mediaItemDescriptor;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)initWithMediaItemDescriptor:(id)a0;

@end

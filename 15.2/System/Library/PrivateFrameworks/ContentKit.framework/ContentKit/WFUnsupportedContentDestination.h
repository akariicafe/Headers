@class NSDictionary, NSString;

@interface WFUnsupportedContentDestination : WFContentDestination <NSSecureCoding, NSCopying, WFSerializableContent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *backingSerializedRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)destinationWithIdentifier:(id)a0 serializedRepresentation:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedTitle;
- (id)wfSerializedRepresentation;
- (id)initWithIdentifier:(id)a0 serializedRepresentation:(id)a1;

@end

@class NSString, NSMutableDictionary, NSMutableSet;

@interface GCHapticCapabilityGraph : NSObject <NSSecureCoding, GCJSONRepresentable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *nodes;
@property (retain, nonatomic) NSMutableSet *exposedCapabilities;
@property (retain, nonatomic) NSMutableSet *exposedLeafCapabilities;
@property (retain, nonatomic) NSMutableSet *allCapabilities;
@property (retain, nonatomic) NSMutableSet *allLeafCapabilities;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)initWithJSONDictionaryRepresentation:(id)a0;
- (id)actuatorsForNode:(id)a0;

@end

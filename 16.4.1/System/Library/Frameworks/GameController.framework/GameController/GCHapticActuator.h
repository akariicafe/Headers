@class NSString;

@interface GCHapticActuator : NSObject <NSSecureCoding, GCJSONRepresentable, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long index;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)jsonDictionaryRepresentation;
- (id)initWithJSONDictionaryRepresentation:(id)a0;
- (id)initWithLabel:(id)a0 type:(long long)a1 index:(unsigned long long)a2;

@end

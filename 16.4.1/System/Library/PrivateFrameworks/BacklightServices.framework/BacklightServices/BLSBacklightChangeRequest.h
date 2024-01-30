@class NSString, BLSBacklightChangeSourceEventMetadata;

@interface BLSBacklightChangeRequest : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long requestedActivityState;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) long long sourceEvent;
@property (readonly, nonatomic) BLSBacklightChangeSourceEventMetadata *sourceEventMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithRequestedActivityState:(long long)a0 explanation:(id)a1 timestamp:(unsigned long long)a2 sourceEvent:(long long)a3 sourceEventMetadata:(id)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

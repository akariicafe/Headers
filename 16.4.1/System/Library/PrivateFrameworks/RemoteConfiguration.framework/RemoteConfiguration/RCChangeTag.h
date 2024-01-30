@class NSString;

@interface RCChangeTag : NSObject <RCSerializable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *contentHash;
@property (readonly, copy, nonatomic) NSString *lastModifiedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 contentHash:(id)a1 lastModifiedString:(id)a2;
- (void).cxx_destruct;

@end

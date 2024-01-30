@class NSData;

@interface DAPartialIP : NSObject <CUXPCCodable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *address;
@property (readonly, copy, nonatomic) NSData *mask;

- (void)encodeWithCoder:(id)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0 mask:(id)a1;

@end

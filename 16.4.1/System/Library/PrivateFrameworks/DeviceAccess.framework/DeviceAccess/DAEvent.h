@class NSError;

@interface DAEvent : NSObject <CUXPCCodable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic) long long eventType;

+ (id)allocInitWithXPCObject:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithEventType:(long long)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithEventType:(long long)a0 error:(id)a1;

@end

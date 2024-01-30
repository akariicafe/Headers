@class NSError;

@interface CDMXPCSetGraphResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSError *error;

- (id)initWithError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)success;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

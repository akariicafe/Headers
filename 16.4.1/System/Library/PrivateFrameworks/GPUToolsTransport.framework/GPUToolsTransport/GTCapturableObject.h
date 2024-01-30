@class NSString;

@interface GTCapturableObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) unsigned long long objectID;
@property (readonly, nonatomic) unsigned long long streamRef;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStreamRef:(unsigned long long)a0;
- (id)initWithType:(int)a0 name:(id)a1 address:(unsigned long long)a2;

@end

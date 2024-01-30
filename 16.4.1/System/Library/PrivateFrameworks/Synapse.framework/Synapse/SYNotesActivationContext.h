@class NSData, BSProcessHandle;

@interface SYNotesActivationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *userActivityData;
@property (readonly, nonatomic) BSProcessHandle *processHandle;
@property (readonly, nonatomic) unsigned int contextID;
@property (readonly, nonatomic) unsigned long long renderID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithUserActivityData:(id)a0 contextID:(unsigned int)a1 renderID:(unsigned long long)a2;

@end

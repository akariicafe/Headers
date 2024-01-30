@class NSArray, NSUUID;

@interface CTXPCContexts : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *subscriptions;
@property (retain, nonatomic) NSUUID *dataPreferred;
@property (retain, nonatomic) NSUUID *voicePreferred;

- (void)encodeWithCoder:(id)a0;
- (id)findForAccount:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)findForSlot:(long long)a0;
- (id)findForUuid:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

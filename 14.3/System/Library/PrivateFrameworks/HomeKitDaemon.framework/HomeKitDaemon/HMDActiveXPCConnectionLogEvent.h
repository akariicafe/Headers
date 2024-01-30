@class NSUUID, NSString;

@interface HMDActiveXPCConnectionLogEvent : HMDLogEvent

@property (class, readonly, copy) NSUUID *identifier;

@property (readonly, nonatomic) NSString *name;
@property (readonly, getter=isActivated) BOOL activated;
@property (readonly) BOOL added;

+ (id)initWithNewXPCConnectionAdded:(id)a0;
+ (id)initWithXPCConnectionRemoved:(id)a0;

- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0 added:(BOOL)a1;

@end

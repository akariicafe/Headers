@class NSString;

@interface SBSRemoteAlertHandleContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *handleID;
@property (nonatomic, getter=isActive) BOOL active;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithHandleID:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

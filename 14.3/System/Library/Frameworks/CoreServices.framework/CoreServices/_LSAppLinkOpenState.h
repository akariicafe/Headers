@class NSString, NSXPCConnection, NSURL, NSDictionary, _LSOpenConfiguration;

@interface _LSAppLinkOpenState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSURL *URL;
@property (copy) NSString *bundleIdentifier;
@property (retain) _LSOpenConfiguration *openConfiguration;
@property (readonly) const struct { unsigned int x0[8]; } *auditToken;
@property (retain) NSXPCConnection *XPCConnection;
@property (copy) NSDictionary *browserState;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end

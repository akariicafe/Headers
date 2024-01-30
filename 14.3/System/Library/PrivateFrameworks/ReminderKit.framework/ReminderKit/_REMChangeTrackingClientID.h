@class NSString;

@interface _REMChangeTrackingClientID : NSObject <REMChangeTrackingClientIdentifying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithClientName:(id)a0 accountIdentifier:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

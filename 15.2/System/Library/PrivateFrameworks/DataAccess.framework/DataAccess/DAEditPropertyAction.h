@class NSString;

@interface DAEditPropertyAction : DAAction

@property (readonly, nonatomic) NSString *propertyName;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) NSString *propertyNamespace;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithChangedItem:(id)a0 propertyName:(id)a1 value:(id)a2 propertyNamespace:(id)a3 serverId:(id)a4;

@end

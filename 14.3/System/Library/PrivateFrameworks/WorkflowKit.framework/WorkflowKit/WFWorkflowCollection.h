@class NSString, WFWorkflowIcon;

@interface WFWorkflowCollection : WFDatabaseObjectDescriptor

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) WFWorkflowIcon *icon;
@property (readonly, nonatomic) NSString *systemIconName;
@property (readonly, nonatomic, getter=isFolder) BOOL folder;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;

+ (id)defaultName;
+ (BOOL)supportsSecureCoding;
+ (id)defaultIcon;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 isFolder:(BOOL)a1 name:(id)a2 icon:(id)a3 isDeleted:(BOOL)a4;

@end

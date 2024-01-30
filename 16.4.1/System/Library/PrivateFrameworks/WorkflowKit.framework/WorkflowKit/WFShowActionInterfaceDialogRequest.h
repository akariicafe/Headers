@class NSString, NSDictionary;

@interface WFShowActionInterfaceDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *actionClassName;
@property (readonly, copy, nonatomic) NSDictionary *classNamesByType;
@property (readonly, nonatomic) BOOL isCatalystInterfaceRequest;
@property (readonly, nonatomic) NSString *catalystInterfaceClassName;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithActionClassName:(id)a0 classNamesByType:(id)a1 attribution:(id)a2;

@end

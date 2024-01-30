@class NSString, NSDictionary;

@interface WFShowActionInterfaceDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *actionClassName;
@property (readonly, copy, nonatomic) NSDictionary *classNamesByType;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithActionClassName:(id)a0 classNamesByType:(id)a1 attribution:(id)a2;

@end

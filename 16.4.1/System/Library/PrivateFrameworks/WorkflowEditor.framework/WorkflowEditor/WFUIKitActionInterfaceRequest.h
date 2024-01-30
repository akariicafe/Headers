@class NSString;

@interface WFUIKitActionInterfaceRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *actionClassName;
@property (readonly, nonatomic) NSString *userInterfaceClassName;
@property (readonly, nonatomic) struct CGSize { double width; double height; } presentationSize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithActionClassName:(id)a0 userInterfaceClassName:(id)a1 presentationSize:(struct CGSize { double x0; double x1; })a2;

@end

@class NSString, UIImageSymbolConfiguration;

@interface UIImageNibPlaceholder : UIImage <NSCoding> {
    NSString *runtimeResourceName;
    NSString *systemSymbolResourceName;
}

@property (nonatomic) long long resourceRenderingMode;
@property (copy, nonatomic) UIImageSymbolConfiguration *resourceSymbolImageConfiguration;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithContentsOfFile:(id)a0 andRuntimeResourceName:(id)a1;
- (id)initWithData:(id)a0 andRuntimeResourceName:(id)a1;
- (id)initWithRuntimeSystemSymbolResourceName:(id)a0;
- (id)_initWithOtherImage:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

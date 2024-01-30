@class NSString;

@interface CPInformationItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *detail;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 detail:(id)a1;

@end

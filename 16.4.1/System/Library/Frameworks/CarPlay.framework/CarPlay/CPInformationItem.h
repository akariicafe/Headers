@class NSString;

@interface CPInformationItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *detail;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detail:(id)a1;

@end

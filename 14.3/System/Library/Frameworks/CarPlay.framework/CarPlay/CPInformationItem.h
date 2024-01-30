@class NSString;

@interface CPInformationItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *detail;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 detail:(id)a1;

@end

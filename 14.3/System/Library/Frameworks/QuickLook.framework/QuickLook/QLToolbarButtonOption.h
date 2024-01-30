@class NSString;

@interface QLToolbarButtonOption : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *identifier;
@property (copy) NSString *title;
@property long long style;

+ (id)cancelOption;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isCancel;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

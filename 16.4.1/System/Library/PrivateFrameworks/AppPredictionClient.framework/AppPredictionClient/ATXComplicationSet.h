@class NSArray, NSString;

@interface ATXComplicationSet : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *complications;
@property (readonly, copy, nonatomic) NSString *localizedTitle;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithComplications:(id)a0;
- (id)initWithComplications:(id)a0 localizedTitle:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end

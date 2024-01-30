@class NSArray;

@interface CHSWidgetKeysBox : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *widgetKeys;

- (void).cxx_destruct;
- (id)initWithWidgetKeys:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

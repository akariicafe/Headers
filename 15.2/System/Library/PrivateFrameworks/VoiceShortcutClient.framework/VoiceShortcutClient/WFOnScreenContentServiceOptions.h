@class NSArray;

@interface WFOnScreenContentServiceOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *supportedItemClasses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSupportedItemClasses:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end

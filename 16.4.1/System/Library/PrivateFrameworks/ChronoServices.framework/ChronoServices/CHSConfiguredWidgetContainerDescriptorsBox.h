@class NSArray;

@interface CHSConfiguredWidgetContainerDescriptorsBox : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *descriptors;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDescriptors:(id)a0;
- (void).cxx_destruct;

@end

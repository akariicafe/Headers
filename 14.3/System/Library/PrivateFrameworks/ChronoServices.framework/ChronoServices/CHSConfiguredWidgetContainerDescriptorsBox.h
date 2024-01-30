@class NSArray;

@interface CHSConfiguredWidgetContainerDescriptorsBox : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *descriptors;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDescriptors:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

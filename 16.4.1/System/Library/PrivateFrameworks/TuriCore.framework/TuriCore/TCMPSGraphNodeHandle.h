@class NSString;

@interface TCMPSGraphNodeHandle : NSObject <MPSHandle> {
    NSString *_label;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handleWithLabel:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithLabel:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)label;
- (void).cxx_destruct;

@end

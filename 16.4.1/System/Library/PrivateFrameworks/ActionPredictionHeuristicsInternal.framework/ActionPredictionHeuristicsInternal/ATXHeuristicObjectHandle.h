@class NSNumber;

@interface ATXHeuristicObjectHandle : NSObject <NSSecureCoding> {
    NSNumber *_deviceHandle;
    NSNumber *_objHandle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id obj;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 wrapping:(id)a1;

@end

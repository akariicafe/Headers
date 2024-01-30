@class NSString;

@interface DAAppSession : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSString *bundleIdentifier;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end

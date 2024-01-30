@class NSString, WFFileRepresentation;

@interface WFWorkflowFileDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFFileRepresentation *file;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *sourceAppIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFile:(id)a0 name:(id)a1;
- (id)initWithFile:(id)a0 name:(id)a1 sourceAppIdentifier:(id)a2;

@end

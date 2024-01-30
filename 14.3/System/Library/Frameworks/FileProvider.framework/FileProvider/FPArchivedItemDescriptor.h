@class NSString, NSNumber;

@interface FPArchivedItemDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSNumber *fileSize;
@property (copy, nonatomic) NSString *typeIdentifier;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

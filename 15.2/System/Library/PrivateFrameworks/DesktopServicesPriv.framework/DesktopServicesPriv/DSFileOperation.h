@class DSFileOperationID, NSProgress, UTType, NSDate;

@interface DSFileOperation : NSObject <DSHashableEquatable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) DSFileOperationID *operationID;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) NSDate *dateStarted;
@property (retain, nonatomic) UTType *utType;

+ (BOOL)dateIsBusyFolderDate:(double)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end

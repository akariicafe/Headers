@class NSString, NSURL;

@interface MFFileAttachment : NSObject

@property (copy, nonatomic) NSString *attachmentName;
@property (retain, nonatomic) NSURL *attachmentContentIDURL;
@property (nonatomic) int attachmentType;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end

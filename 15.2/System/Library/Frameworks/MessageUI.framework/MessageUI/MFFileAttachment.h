@class NSString, NSURL;

@interface MFFileAttachment : NSObject

@property (copy, nonatomic) NSString *attachmentName;
@property (retain, nonatomic) NSURL *attachmentContentIDURL;
@property (nonatomic) int attachmentType;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

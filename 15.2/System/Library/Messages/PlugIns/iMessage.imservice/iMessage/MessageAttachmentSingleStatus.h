@class NSError, NSString;

@interface MessageAttachmentSingleStatus : NSObject

@property (retain) NSError *transferError;
@property (retain) NSString *additionalErrorInfo;
@property (retain) NSString *errorURLString;
@property long long errorFileSize;

- (void).cxx_destruct;

@end

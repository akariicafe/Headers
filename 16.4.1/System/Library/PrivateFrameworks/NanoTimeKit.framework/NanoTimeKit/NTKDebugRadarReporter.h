@class NSString, NSMutableArray, NSURL;

@interface NTKDebugRadarReporter : NSObject

@property (copy, nonatomic) NSString *radarTitle;
@property (copy, nonatomic) NSString *alertTitle;
@property (copy, nonatomic) NSString *alertMessage;
@property (retain, nonatomic) NSMutableArray *attachmentURLs;
@property (retain, nonatomic) NSMutableArray *additionalInformationStrings;
@property (retain, nonatomic) NSURL *temporaryDirectoryURLToCleanup;

+ (BOOL)_archiveDirectory:(id)a0 toFile:(id)a1;

- (BOOL)present;
- (void).cxx_destruct;
- (void)appendInformationToDescription:(id)a0;
- (BOOL)addAttachmentAtURL:(id)a0 error:(id *)a1;
- (id)initWithRadarTitle:(id)a0 alertTitle:(id)a1 alertMessage:(id)a2;

@end

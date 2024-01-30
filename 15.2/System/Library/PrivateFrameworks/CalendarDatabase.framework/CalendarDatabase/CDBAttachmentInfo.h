@class NSURL, NSString;

@interface CDBAttachmentInfo : NSObject

@property (readonly, copy, nonatomic) NSURL *legacyURL;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *localRelativePath;

- (void).cxx_destruct;
- (id)initWithLegacyURL:(id)a0 url:(id)a1 localRelativePath:(id)a2;

@end

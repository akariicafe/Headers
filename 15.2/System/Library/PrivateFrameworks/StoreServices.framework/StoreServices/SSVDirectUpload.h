@class NSString, NSError, NSURL;

@interface SSVDirectUpload : NSObject <SSXPCCoding>

@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic) long long countOfBytesExpectedToSend;
@property (nonatomic) long long countOfBytesSent;
@property (copy, nonatomic) NSError *error;
@property (nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (nonatomic) long long persistentIdentifier;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSURL *thumbnailImageURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *UTI;
@property (copy, nonatomic, setter=_setUploadKind:) NSString *_uploadKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_adoptStatusFromUpload:(id)a0;

@end

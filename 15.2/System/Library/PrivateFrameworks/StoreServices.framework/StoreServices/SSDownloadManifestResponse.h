@class NSArray, NSString;

@interface SSDownloadManifestResponse : NSObject <SSXPCCoding, NSSecureCoding> {
    NSArray *_validDownloads;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *validDownloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end

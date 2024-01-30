@class NSDate, NSString, NSURL, NSFileProviderItemVersion, FPSandboxingURLWrapper, FPItemID, NSPersonNameComponents, NSObject;
@protocol NSCopying, NSSecureCoding, GSAdditionStoring;

@interface FPFileVersion : NSObject <NSSecureCoding> {
    FPSandboxingURLWrapper *_wrapper;
    int _notifyToken;
}

@property (class, readonly) NSString *gsNamespace;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasThumbnail;
@property (retain, nonatomic) NSObject<GSAdditionStoring> *storage;
@property (readonly, copy, nonatomic) NSFileProviderItemVersion *version;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, copy, nonatomic) NSPersonNameComponents *lastEditorNameComponents;
@property (readonly, nonatomic) NSString *lastEditorFormattedName;
@property (readonly, copy, nonatomic) NSString *lastEditorDeviceName;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSURL *physicalURL;
@property (readonly, copy, nonatomic) NSURL *originalURL;
@property (readonly, nonatomic) FPItemID *fpItemIdentifier;
@property (readonly, nonatomic) id<NSCopying, NSSecureCoding> persistentIdentifier;
@property (readonly, nonatomic) NSString *etag;

+ (id)parseInfoFromVersionURL:(id)a0 domainIdentifier:(id *)a1 fpItemIdentifier:(id *)a2 etag:(id *)a3;
+ (id)etagForVersion:(id)a0 identifier:(id)a1;
+ (id)parseEtag:(id)a0;
+ (id)storagePrefixForOriginalURL:(id)a0;
+ (id)versionFaultName:(id)a0 identifier:(id)a1 ext:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)checkThumbnailChanged;
- (id)fetchGSURLForNamespace:(id)a0;
- (id)initWithVersion:(id)a0 displayName:(id)a1 originalURL:(id)a2 physicalURL:(id)a3 identifier:(id)a4 modificationDate:(id)a5 lastEditorNameComponents:(id)a6 size:(id)a7;
- (void)registerThumbnailNotification;

@end

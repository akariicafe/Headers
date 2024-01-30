@class NSString, NSURL;

@interface BADownload : NSObject <NSCoding, NSSecureCoding, NSCopying> {
    long long _internalState;
    unsigned long long _clientSpecifiedFileSize;
    NSURL *_stagedDownloadedFileURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property long long priority;
@property long long necessity;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain) NSString *applicationGroupIdentifier;
@property (readonly, nonatomic) long long state;
@property (readonly) BOOL isEssential;

+ (id)classesForSerialization;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)syncTo:(id)a0;
- (BOOL)cloneDownloadToFinalDestinationURL:(id *)a0 error:(id *)a1;
- (id)copyAsNonEssential;
- (id)initPrivatelyWithApplicationGroupIdentifier:(id)a0;

@end

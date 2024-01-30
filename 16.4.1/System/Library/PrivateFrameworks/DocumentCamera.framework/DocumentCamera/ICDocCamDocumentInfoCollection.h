@class NSString, NSMutableArray, NSDate;

@interface ICDocCamDocumentInfoCollection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long docCamPDFVersion;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSMutableArray *docInfos;

+ (id)infoCollectionWithArchivedDocumentCameraScanData:(id)a0 imageCache:(id)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)bumpModificationDate;
- (id)init;
- (void).cxx_destruct;

@end

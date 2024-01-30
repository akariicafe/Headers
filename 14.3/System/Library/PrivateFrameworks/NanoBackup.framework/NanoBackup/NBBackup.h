@class NSUUID, NSString, NSURL, NSDate, NSNumber, NSData;

@interface NBBackup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasResolvedActiveWatchFaceFilePath;
@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned long long backupType;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *productType;
@property (retain, nonatomic) NSString *productName;
@property (retain, nonatomic) NSString *systemVersion;
@property (retain, nonatomic) NSString *systemBuildVersion;
@property (retain, nonatomic) NSString *marketingVersion;
@property (retain, nonatomic) NSString *deviceColor;
@property (retain, nonatomic) NSString *deviceEnclosureColor;
@property (retain, nonatomic) NSNumber *bottomEnclosureMaterial;
@property (retain, nonatomic) NSNumber *topEnclosureMaterial;
@property (retain, nonatomic) NSNumber *fcmMaterial;
@property (retain, nonatomic) NSNumber *bcmWindowMaterial;
@property (retain, nonatomic) NSNumber *coverGlassColor;
@property (retain, nonatomic) NSNumber *housingColor;
@property (retain, nonatomic) NSNumber *backingColor;
@property (retain, nonatomic) NSString *watchFace;
@property (retain, nonatomic) NSString *watchFaceColor;
@property (nonatomic, getter=isLocationOptInEnabled) BOOL locationOptInEnabled;
@property (nonatomic, getter=isDiagnosticsOptInEnabled) BOOL diagnosticsOptInEnabled;
@property (retain, nonatomic) NSDate *lastModificationDate;
@property (retain, nonatomic) NSNumber *sizeInBytes;
@property (retain, nonatomic) NSURL *activeWatchFaceFileURL;
@property (retain, nonatomic) NSString *deviceCSN;
@property (retain, nonatomic) NSData *watchFaceData;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end

@class NSString, NSURL, NSDate, NSPersonNameComponents, GSPermanentStorage;
@protocol NSSecureCoding, NSCopying;

@interface BRNonLocalVersion : NSObject {
    GSPermanentStorage *_versionsStore;
    long long _sandboxHandle;
    NSURL *_physicalURL;
}

@property (nonatomic) BOOL hasThumbnail;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *etag;
@property (readonly, nonatomic) id<NSCopying, NSSecureCoding> persistentIdentifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) NSString *lastEditorDeviceName;
@property (readonly, nonatomic) NSString *lastEditorFormattedName;
@property (readonly, nonatomic) NSPersonNameComponents *lastEditorNameComponents;
@property (readonly, nonatomic) BOOL isLatestVersion;

+ (id)listVersionsOfDocumentAtURL:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithURL:(id)a0 physicalURL:(id)a1 size:(id)a2 extension:(id)a3 etag:(id)a4 hasThumbnail:(BOOL)a5 displayName:(id)a6 lastEditorDeviceName:(id)a7 lastEditorNameComponents:(id)a8 modificationDate:(id)a9 versionsStore:(id)a10;

@end

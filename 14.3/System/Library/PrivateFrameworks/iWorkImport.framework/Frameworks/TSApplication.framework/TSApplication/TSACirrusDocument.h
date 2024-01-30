@class TSUTemporaryDirectory, NSString, NSDictionary, TSPObjectContext, NSURL, TSADocumentRoot, NSUUID;
@protocol NSFilePresenter;

@interface TSACirrusDocument : NSObject <TSPObjectContextDelegate> {
    BOOL _isClosed;
    TSUTemporaryDirectory *_tempDirForSupport;
    TSUTemporaryDirectory *_tempDirForCache;
}

@property (retain, nonatomic) TSPObjectContext *context;
@property (readonly, nonatomic) NSString *documentPasswordHint;
@property (copy, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) TSADocumentRoot *documentRoot;
@property (readonly, nonatomic) BOOL skipDocumentUpgrade;
@property (readonly, nonatomic) id<NSFilePresenter> filePresenter;
@property (readonly, nonatomic) long long archiveValidationMode;
@property (readonly, nonatomic) BOOL ignoreDocumentSupport;
@property (readonly, nonatomic) BOOL isDocumentSupportTemporary;
@property (readonly, nonatomic) NSDictionary *additionalDocumentPropertiesForWrite;
@property (readonly, nonatomic) NSDictionary *additionalDocumentSupportPropertiesForWrite;
@property (readonly, nonatomic) BOOL areNewExternalReferencesToDataAllowed;
@property (readonly, nonatomic) NSUUID *baseUUIDForObjectUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

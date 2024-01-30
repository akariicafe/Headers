@class NSError, NSString, NSUUID, NSSet, NSDictionary, TSPDocumentLoadValidationPolicy, NSMutableSet, TSPDocumentSaveValidationPolicy;
@protocol NSFilePresenter;

@interface TSPTemporaryObjectContextDelegate : NSObject <TSPObjectContextDelegate> {
    NSMutableSet *_persistenceWarnings;
}

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSSet *persistenceWarnings;
@property (nonatomic) BOOL ignoreDocumentSupport;
@property (readonly, nonatomic) id<NSFilePresenter> filePresenter;
@property (readonly, nonatomic) TSPDocumentLoadValidationPolicy *documentLoadValidationPolicy;
@property (readonly, nonatomic) TSPDocumentSaveValidationPolicy *documentSaveValidationPolicy;
@property (readonly, nonatomic) BOOL isDocumentSupportTemporary;
@property (readonly, nonatomic) NSDictionary *additionalDocumentPropertiesForWrite;
@property (readonly, nonatomic) NSDictionary *additionalDocumentSupportPropertiesForWrite;
@property (readonly, nonatomic) BOOL areNewExternalReferencesToDataAllowed;
@property (readonly, nonatomic) NSUUID *baseUUIDForObjectUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)temporaryObjectContextDelegateWithPackageDataForWrite:(id)a0 additionalDocumentPropertiesForWrite:(id)a1;

@end

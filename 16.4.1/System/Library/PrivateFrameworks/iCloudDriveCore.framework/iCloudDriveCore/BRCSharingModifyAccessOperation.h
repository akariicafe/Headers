@class NSString, BRCDocumentItem, NSData;

@interface BRCSharingModifyAccessOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    BRCDocumentItem *_document;
    BOOL _allowAccess;
    NSData *_accessToken;
    NSString *_referenceIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

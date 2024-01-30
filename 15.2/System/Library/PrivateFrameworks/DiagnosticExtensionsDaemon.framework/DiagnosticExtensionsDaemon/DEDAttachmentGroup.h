@class NSString, NSArray, NSURL, DEDBugSession, DEDExtensionIdentifier;

@interface DEDAttachmentGroup : NSObject <DEDSecureArchiving>

@property (retain, nonatomic) DEDExtensionIdentifier *dedExtensionIdentifier;
@property (retain) DEDBugSession *fromBugSession;
@property (retain) NSString *deviceID;
@property (retain) NSURL *rootURL;
@property (retain) NSString *displayName;
@property (retain) NSString *extensionID;
@property (retain) NSArray *attachmentItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;
+ (id)groupWithDictionary:(id)a0;
+ (id)groupWithDEGroup:(id)a0 identifier:(id)a1;

- (BOOL)isLocal;
- (id)serialize;
- (void).cxx_destruct;
- (id)archiveName;
- (id)totalFilesize;

@end

@class NSString, DEDExtensionIdentifier;

@interface DEDExtension : NSObject <DEDSecureArchiving, NSCopying>

@property (retain) NSString *identifier;
@property (retain) DEDExtensionIdentifier *dedExtensionIdentifier;
@property (retain) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;
+ (id)extensionWithDEExtension:(id)a0;
+ (id)extensionWithDicionary:(id)a0;

@end

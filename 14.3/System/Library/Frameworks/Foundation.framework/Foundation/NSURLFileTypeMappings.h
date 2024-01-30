@class NSURLFileTypeMappingsInternal;

@interface NSURLFileTypeMappings : NSObject {
    NSURLFileTypeMappingsInternal *_internal;
}

+ (id)sharedMappings;

- (id)extensionsForMIMEType:(id)a0;
- (id)_UTIMIMETypeForExtension:(id)a0;
- (id)MIMETypeForExtension:(id)a0;
- (id)_init;
- (id)_UTIextensionForMIMEType:(id)a0;
- (id)preferredExtensionForMIMEType:(id)a0;

@end

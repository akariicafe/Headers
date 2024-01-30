@class NSURLFileTypeMappingsInternal;

@interface NSURLFileTypeMappings : NSObject {
    NSURLFileTypeMappingsInternal *_internal;
}

+ (id)sharedMappings;

- (id)preferredExtensionForMIMEType:(id)a0;
- (id)MIMETypeForExtension:(id)a0;
- (id)_UTIMIMETypeForExtension:(id)a0;
- (id)_UTIextensionForMIMEType:(id)a0;
- (id)extensionsForMIMEType:(id)a0;
- (id)_init;

@end

@class NSDictionary;

@interface NSURLFileTypeMappingsInternal : NSObject {
    NSDictionary *MIMETypeToExtensionList;
    NSDictionary *extensionToMIMEType;
}

- (id)init;

@end

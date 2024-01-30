@interface IMFileManager : NSFileManager

+ (id)defaultManager;
+ (id)defaultHFSFileManager;

- (id)MIMETypeOfPathExtension:(id)a0;
- (id)displayNameOfFileWithName:(id)a0 hfsFlags:(unsigned short)a1;
- (id)UTITypeOfPath:(id)a0;
- (id)pathExtensionForMIMEType:(id)a0;
- (id)UTITypeOfMimeType:(id)a0;
- (id)MIMETypeOfPath:(id)a0;
- (id)pathExtensionForUTIType:(id)a0;
- (id)UTITypeOfPathExtension:(id)a0;

@end

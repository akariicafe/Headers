@class NSString, NSData, NSMutableDictionary;

@interface MFMessageFileWrapper : NSObject {
    NSString *_filename;
    NSString *_preferredFilename;
    NSData *_data;
    NSMutableDictionary *_attributes;
    NSString *_linkDestination;
    NSString *_url;
    int _type;
}

@property (copy, nonatomic) NSString *path;

- (id)initWithPath:(id)a0;
- (id)URL;
- (id)filename;
- (void)setMimeType:(id)a0;
- (void)setMessageID:(id)a0;
- (BOOL)isImageFile;
- (id)symbolicLinkDestination;
- (void).cxx_destruct;
- (id)icsRepresentation;
- (BOOL)isPDFFile;
- (void)setMeetingStorePersistentID:(id)a0;
- (id)inferredMimeType;
- (void)setType:(unsigned int)a0;
- (void)dealloc;
- (id)contentID;
- (BOOL)isPlaceholder;
- (id)mimeType;
- (void)setFilename:(id)a0;
- (BOOL)isDirectory;
- (id)fileWrappers;
- (id)meetingStorePersistentID;
- (id)initRegularFileWithContents:(id)a0;
- (void)setURL:(id)a0;
- (id)description;
- (unsigned int)type;
- (id)fileAttributes;
- (void)setContentID:(id)a0;
- (unsigned int)creator;
- (void)setPreferredFilename:(id)a0;
- (void)setFileProtection:(id)a0;
- (id)fileProtection;
- (id)preferredFilename;
- (id)regularFileContents;
- (unsigned long long)fileSize;
- (void)setFileAttributes:(id)a0;
- (id)messageID;
- (BOOL)isRegularFile;
- (void)setCreator:(unsigned int)a0;
- (BOOL)isSymbolicLink;
- (id)eventUniqueID;
- (void)_isImage:(BOOL *)a0 orPDFFile:(BOOL *)a1;
- (void)setFinderFlags:(unsigned short)a0;
- (unsigned short)finderFlags;
- (void)setEventUniqueID:(id)a0;
- (void)setICSRepresentation:(id)a0;
- (BOOL)isUnzippableFile;
- (id)initSymbolicLinkWithDestination:(id)a0;

@end

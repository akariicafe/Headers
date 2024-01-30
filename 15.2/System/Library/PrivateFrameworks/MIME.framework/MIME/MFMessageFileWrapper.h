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

- (unsigned long long)fileSize;
- (BOOL)isRegularFile;
- (id)initWithPath:(id)a0;
- (void)setCreator:(unsigned int)a0;
- (void)setFilename:(id)a0;
- (id)filename;
- (id)fileAttributes;
- (BOOL)isDirectory;
- (id)contentID;
- (id)fileWrappers;
- (void)setMimeType:(id)a0;
- (void)setMessageID:(id)a0;
- (BOOL)isPlaceholder;
- (id)mimeType;
- (id)description;
- (id)fileProtection;
- (id)preferredFilename;
- (void)setPreferredFilename:(id)a0;
- (id)initRegularFileWithContents:(id)a0;
- (void)setURL:(id)a0;
- (void)setFileProtection:(id)a0;
- (void).cxx_destruct;
- (void)setFileAttributes:(id)a0;
- (unsigned int)creator;
- (id)regularFileContents;
- (BOOL)isSymbolicLink;
- (id)messageID;
- (id)URL;
- (unsigned int)type;
- (void)dealloc;
- (void)setType:(unsigned int)a0;
- (void)setContentID:(id)a0;
- (BOOL)isPDFFile;
- (id)meetingStorePersistentID;
- (BOOL)isImageFile;
- (id)symbolicLinkDestination;
- (id)icsRepresentation;
- (void)setMeetingStorePersistentID:(id)a0;
- (id)inferredMimeType;
- (id)eventUniqueID;
- (void)_isImage:(BOOL *)a0 orPDFFile:(BOOL *)a1;
- (void)setFinderFlags:(unsigned short)a0;
- (unsigned short)finderFlags;
- (void)setEventUniqueID:(id)a0;
- (void)setICSRepresentation:(id)a0;
- (BOOL)isUnzippableFile;
- (id)initSymbolicLinkWithDestination:(id)a0;

@end

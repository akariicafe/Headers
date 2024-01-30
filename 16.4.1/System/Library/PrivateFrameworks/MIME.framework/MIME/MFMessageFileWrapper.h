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
- (id)initWithPath:(id)a0;
- (void)setFilename:(id)a0;
- (BOOL)isDirectory;
- (id)filename;
- (void)setURL:(id)a0;
- (id)URL;
- (unsigned int)type;
- (void)setMimeType:(id)a0;
- (BOOL)isPlaceholder;
- (id)fileAttributes;
- (BOOL)isRegularFile;
- (id)contentID;
- (BOOL)isSymbolicLink;
- (void)dealloc;
- (void)setType:(unsigned int)a0;
- (id)mimeType;
- (void)setMessageID:(id)a0;
- (id)messageID;
- (id)fileProtection;
- (id)description;
- (void)setFileProtection:(id)a0;
- (void).cxx_destruct;
- (id)fileWrappers;
- (id)initRegularFileWithContents:(id)a0;
- (id)preferredFilename;
- (id)regularFileContents;
- (void)setFileAttributes:(id)a0;
- (void)setPreferredFilename:(id)a0;
- (unsigned int)creator;
- (void)setCreator:(unsigned int)a0;
- (void)setContentID:(id)a0;
- (id)eventUniqueID;
- (id)icsRepresentation;
- (id)inferredMimeType;
- (BOOL)isImageFile;
- (BOOL)isPDFFile;
- (id)meetingStorePersistentID;
- (void)setMeetingStorePersistentID:(id)a0;
- (id)symbolicLinkDestination;
- (void)setFinderFlags:(unsigned short)a0;
- (void)_isImage:(BOOL *)a0 orPDFFile:(BOOL *)a1;
- (unsigned short)finderFlags;
- (id)initSymbolicLinkWithDestination:(id)a0;
- (BOOL)isUnzippableFile;
- (void)setEventUniqueID:(id)a0;
- (void)setICSRepresentation:(id)a0;

@end

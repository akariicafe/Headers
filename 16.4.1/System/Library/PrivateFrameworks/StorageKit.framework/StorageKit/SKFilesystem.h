@class NSString;

@interface SKFilesystem : NSObject

@property (retain) NSString *localizedName;
@property (retain) NSString *localizedKey;
@property (retain) NSString *type;
@property (retain) NSString *majorType;
@property (retain) NSString *dmPersonality;
@property BOOL isEncrypted;
@property BOOL defaultEffaceable;
@property BOOL isCaseSensitive;
@property BOOL isJournaled;
@property BOOL shouldShow;
@property unsigned long long minimumSize;
@property (retain) NSString *contentMask;
@property int sortPriority;
@property (retain) NSString *unlocalizedName;
@property (retain) NSString *unlocalizedEncryptedName;

+ (BOOL)_shouldShowFilesystemWithType:(id)a0 key:(id)a1 personality:(id)a2;
+ (id)_skfilesystemTypeWithPersonality:(id)a0;
+ (void)addFilesystemsWithType:(id)a0 filesystemPersonality:(id)a1 personalityDict:(id)a2 userVisibleName:(id)a3 caseSensitive:(BOOL)a4 outFilesystems:(id *)a5;
+ (id)buildFilesystems;
+ (id)buildSpecialFilesystems;

- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)supportsJournaling;
- (id)description;
- (void).cxx_destruct;
- (id)dicationaryRepresentation;
- (id)initEncryptedFSWithUnencryptedFS:(id)a0 localizedName:(id)a1 sortPriority:(int)a2;
- (id)initWithSKFilesystem:(id)a0 personality:(id)a1 majorType:(id)a2 localizedName:(id)a3 localizedKey:(id)a4 caseSensitive:(BOOL)a5 encrypted:(BOOL)a6 shouldShow:(BOOL)a7 personalityKey:(id)a8 sortPriority:(int)a9;
- (id)initWithSpecialFilesystem:(id)a0 majorType:(id)a1 localizedName:(id)a2;

@end

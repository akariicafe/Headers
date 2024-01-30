@class NSURL, NSNumber, NSDictionary;
@protocol BMBookmark;

@interface ATXBMBookmark : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *urlPath;
@property (readonly, nonatomic) NSNumber *versionNumber;
@property (retain, nonatomic) id<BMBookmark> bookmark;
@property (retain, nonatomic) NSDictionary *metadata;

+ (id)bookmarkFromURLPath:(id)a0 maxFileSize:(unsigned long long)a1 versionNumber:(id)a2;
+ (BOOL)_fileSizeWithinLimitsForPath:(id)a0 maxFileSize:(unsigned long long)a1;
+ (id)bookmarkFromData:(id)a0 bookmarkLocation:(id)a1 versionNumber:(id)a2;
+ (BOOL)_fileExistsAtPath:(id)a0;
+ (id)_dataFromPath:(id)a0;

- (BOOL)isEqualToATXBMBookmark:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURLPath:(id)a0 versionNumber:(id)a1 bookmark:(id)a2 metadata:(id)a3;
- (id)serializeBookmark:(id *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)saveBookmarkWithError:(id *)a0;
- (unsigned long long)hash;
- (id)allowedClassesForBookmarkSecureCoding;

@end

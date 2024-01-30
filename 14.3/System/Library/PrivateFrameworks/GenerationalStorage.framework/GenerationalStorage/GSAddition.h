@class NSString, NSDictionary, NSData, NSURL, NSObject, NSNumber;
@protocol NSSecureCoding, GSAdditionStoringPrivate, GSAdditionStoring, NSCopying;

@interface GSAddition : NSObject {
    NSNumber *_size;
    NSString *_originalName;
    NSString *_displayName;
    NSDictionary *_userInfo;
}

@property (readonly, nonatomic) NSData *sandboxExtension;
@property (readonly, nonatomic) BOOL isSavedConflict;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSObject<GSAdditionStoring, GSAdditionStoringPrivate> *storage;
@property (readonly, nonatomic) NSString *nameSpace;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *size;
@property (readonly, nonatomic) NSString *originalPOSIXName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) id<NSCopying, NSSecureCoding> persistentIdentifier;

+ (id)makeNameForUser:(unsigned int)a0 name:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)mergeUserInfo:(id)a0 error:(id *)a1;
- (id)replaceItemAtURL:(id)a0 error:(id *)a1;
- (id)displayNameWithError:(id *)a0;
- (id)originalPOSIXNameWithError:(id *)a0;
- (id)userInfoWithError:(id *)a0;
- (void)_refreshWithDictionary:(id)a0;
- (BOOL)refreshWithError:(id *)a0;
- (id)_initWithStorage:(id)a0 andDictionary:(id)a1;
- (BOOL)setOptions:(unsigned long long)a0 error:(id *)a1;
- (BOOL)setDisplayName:(id)a0 error:(id *)a1;
- (BOOL)setNameSpace:(id)a0 error:(id *)a1;
- (BOOL)internalStat:(struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *)a0;
- (BOOL)copyAdditionContentToURL:(id)a0 error:(id *)a1;

@end

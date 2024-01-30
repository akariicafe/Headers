@class NSMutableString;

@interface PSIGroup : PSIReusableObject {
    unsigned long long _compressedRanges[2];
    struct _NSRange { unsigned long long location; unsigned long long length; } _tokenRanges[8];
    unsigned long long _tokenRangesCount;
}

@property (nonatomic) unsigned long long groupId;
@property (nonatomic) unsigned long long owningGroupId;
@property (nonatomic) short category;
@property (readonly, nonatomic) NSMutableString *contentString;
@property (readonly, nonatomic) NSMutableString *normalizedString;
@property (readonly, nonatomic) NSMutableString *lookupIdentifier;
@property (retain, nonatomic) struct __CFArray { } *assetIds;
@property (retain, nonatomic) struct __CFArray { } *collectionIds;

+ (void)_getTokenRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; }[8])a0 fromCompressedRanges:(unsigned long long[2])a1;
+ (void)getCompressedRanges:(unsigned long long[2])a0 fromTokenRanges:(struct { long long x0; long long x1; } *)a1 count:(long long)a2;

- (void)prepareForReuse;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (long long)compareToGroup:(id)a0;
- (void)_resetTokenRangesForContentString;
- (id)_tokenRangesDescription;
- (unsigned long long)groupIdForObjectLookup;
- (id)initWithContentString:(id)a0 normalizedString:(id)a1 lookIdentifier:(id)a2 category:(short)a3 owningGroupId:(long long)a4;
- (void)prepareFromFilenameStatement:(struct sqlite3_stmt { } *)a0;
- (void)prepareFromStatement:(struct sqlite3_stmt { } *)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })tokenRangeAtIndex:(unsigned long long)a0;
- (unsigned long long)tokenRangesCount;
- (void)unionCollectionIdsWithGroup:(id)a0;
- (void)unionIdsWithGroup:(id)a0;

@end

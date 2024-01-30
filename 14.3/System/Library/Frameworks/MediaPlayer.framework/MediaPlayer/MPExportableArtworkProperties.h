@class NSString, NSArray, ICStoreArtworkInfo;

@interface MPExportableArtworkProperties : NSObject

@property (readonly, nonatomic) ICStoreArtworkInfo *artworkInfo;
@property (copy, nonatomic) NSString *resolvedURLString;
@property (copy, nonatomic) NSArray *artworkTemplateItems;
@property (nonatomic) unsigned long long mediaType;
@property (nonatomic) long long mediaLibraryArtworkType;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end

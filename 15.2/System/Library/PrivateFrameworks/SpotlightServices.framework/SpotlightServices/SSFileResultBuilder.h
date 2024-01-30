@class NSNumber, NSString, NSDate;

@interface SSFileResultBuilder : SSResultBuilder

@property (nonatomic) BOOL isFolder;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *lastOpenDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSNumber *sizeInBytes;
@property (retain, nonatomic) NSNumber *pageCount;
@property (retain, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSString *coreSpotlightId;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSString *fileProviderId;
@property (retain, nonatomic) NSString *fileProviderDomainId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *kind;
@property (retain, nonatomic) NSString *thumbnailURL;

+ (id)bundleId;
+ (id)stringWithPageCount:(id)a0;
+ (id)stringWithLastOpenDate:(id)a0 modificationDate:(id)a1 creationDate:(id)a2;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildInlineCardSection;
- (id)buildThumbnail;
- (id)buildCompactCardSection;
- (id)buildDescriptions;
- (id)buildPunchouts;
- (id)buildCommand;

@end

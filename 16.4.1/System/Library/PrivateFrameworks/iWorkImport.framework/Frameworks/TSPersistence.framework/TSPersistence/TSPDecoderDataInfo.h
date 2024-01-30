@class TSPDataMetadata, TSPDigest, NSString;

@interface TSPDecoderDataInfo : NSObject <TSPDecoderDataInfo>

@property (retain, nonatomic) TSPDataMetadata *dataMetadata;
@property (readonly, nonatomic) TSPDigest *digest;
@property (readonly, nonatomic) NSString *preferredFilename;
@property (readonly, nonatomic) NSString *documentResourceLocator;
@property (readonly, nonatomic) NSString *externalFilePath;
@property (readonly, nonatomic) long long identifier;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

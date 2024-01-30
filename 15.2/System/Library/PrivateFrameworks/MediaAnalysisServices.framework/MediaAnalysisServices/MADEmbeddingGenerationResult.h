@class NSData, NSDate;

@interface MADEmbeddingGenerationResult : MADResult

@property (readonly, nonatomic) unsigned long long embeddingType;
@property (readonly, retain, nonatomic) NSDate *assetCreationDate;
@property (readonly, retain, nonatomic) NSData *data;
@property (readonly, retain, nonatomic) NSData *checksum;
@property (readonly, retain, nonatomic) NSData *thumbnail;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithEmbeddingType:(unsigned long long)a0 assetCreationDate:(id)a1 data:(id)a2 checksum:(id)a3 andThumbnail:(id)a4;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

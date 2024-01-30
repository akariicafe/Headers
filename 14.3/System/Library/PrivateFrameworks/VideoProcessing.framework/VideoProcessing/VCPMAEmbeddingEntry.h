@class NSData, NSString;

@interface VCPMAEmbeddingEntry : NSManagedObject

@property (retain, nonatomic) NSData *checksum;
@property (nonatomic) long long embeddingType;
@property (nonatomic) long long embeddingVersion;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) long long flags;
@property (copy, nonatomic) NSString *localIdentifier;
@property (nonatomic) long long processed;
@property (nonatomic) long long random;

+ (id)fetchRequest;

@end

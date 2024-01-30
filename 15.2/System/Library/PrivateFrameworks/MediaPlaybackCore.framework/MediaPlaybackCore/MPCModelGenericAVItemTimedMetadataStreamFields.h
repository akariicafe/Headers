@class NSString, NSArray;

@interface MPCModelGenericAVItemTimedMetadataStreamFields : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *album;
@property (nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (copy, nonatomic) NSArray *artworkDictionaries;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

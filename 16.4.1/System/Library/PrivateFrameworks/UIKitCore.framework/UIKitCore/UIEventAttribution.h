@class NSURL, NSString;

@interface UIEventAttribution : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned char sourceIdentifier;
@property (readonly, copy, nonatomic) NSURL *destinationURL;
@property (readonly, copy, nonatomic) NSURL *reportEndpoint;
@property (readonly, copy, nonatomic) NSString *sourceDescription;
@property (readonly, copy, nonatomic) NSString *purchaser;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUISClickAttribution:(id)a0;
- (id)toUISClickAttribution;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSourceIdentifier:(unsigned char)a0 destinationURL:(id)a1 reportEndpoint:(id)a2 sourceDescription:(id)a3 purchaser:(id)a4;
- (void).cxx_destruct;
- (id)initWithSourceIdentifier:(unsigned char)a0 destinationURL:(id)a1 sourceDescription:(id)a2 purchaser:(id)a3;

@end

@class NSNumber;

@interface NMSAudiobookReferenceObject : NSObject

@property (readonly, nonatomic) NSNumber *audiobookIdentifier;
@property (nonatomic) unsigned long long downloadLimit;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithAudiobookIdentifier:(id)a0 downloadLimit:(unsigned long long)a1;
- (id)audiobookMediaItem;

@end

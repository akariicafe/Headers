@class NSString;

@interface PLSharedStreamsValidatedExternalResource : PLValidatedExternalResource

@property (nonatomic) unsigned int sharedStreamsType;
@property (retain, nonatomic) NSString *fingerprint;

- (void).cxx_destruct;
- (id)description;

@end

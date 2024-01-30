@class NSString;

@interface PLSharedStreamsValidatedExternalResource : PLValidatedExternalResource

@property (nonatomic) unsigned int sharedStreamsType;
@property (retain, nonatomic) NSString *fingerprint;

- (id)description;
- (void).cxx_destruct;

@end

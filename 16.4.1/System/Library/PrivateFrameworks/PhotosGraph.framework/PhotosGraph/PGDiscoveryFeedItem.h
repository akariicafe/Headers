@class NSString;

@interface PGDiscoveryFeedItem : NSObject <PGDiscoveryFeedItem> {
    NSString *_localIdentifier;
    BOOL _isCollection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithObject:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end

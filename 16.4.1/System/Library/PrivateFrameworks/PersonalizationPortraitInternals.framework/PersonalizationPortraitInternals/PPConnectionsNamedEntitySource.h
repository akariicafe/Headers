@class NSString, PPLocalContactStore, PPLocalNamedEntityStore;

@interface PPConnectionsNamedEntitySource : PPConnectionsSource <PPConnectionsLocationSource> {
    PPLocalNamedEntityStore *_namedEntityStore;
    PPLocalContactStore *_contactStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end

@class NSString, NSMutableArray;

@interface PLAssetsdClientService : NSObject <PLAssetsdClientServiceProtocol> {
    NSMutableArray *_libraryUnavailabilityHandlers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

@class NSString, NSArray;

@interface GEOSiriSyncHandler : NSObject <AFSyncHandler> {
    NSArray *_additionalEnabledMarkets;
    NSString *_manifestEnvironment;
    NSString *_postAnchor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

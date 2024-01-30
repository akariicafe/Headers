@class NSString;

@interface _GEOResourceManifestUpdateAssertionRecord : NSObject <GEOResourceManifestUpdateAssertionRecord>

@property (readonly, nonatomic) NSString *process;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) double creationTimestamp;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

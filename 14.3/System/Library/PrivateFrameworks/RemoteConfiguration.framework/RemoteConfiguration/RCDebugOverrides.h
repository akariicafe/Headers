@class NSArray, NSString;

@interface RCDebugOverrides : NSObject <RCSerializable>

@property (readonly, nonatomic) BOOL disableAbTesting;
@property (readonly, copy, nonatomic) NSArray *overrideSegmentSetIDs;
@property (readonly, copy, nonatomic) NSArray *additionalSegmentSetIDs;
@property (readonly, nonatomic) BOOL onlyUseFallbackURL;
@property (readonly, nonatomic) unsigned long long configurationSource;
@property (readonly, nonatomic) unsigned long long debugEnvironment;
@property (readonly, nonatomic) BOOL ignoreCache;
@property (readonly, nonatomic) BOOL enableExtraLogs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultDebugOverrides;

- (void).cxx_destruct;
- (id)initWithDisableAbTesting:(BOOL)a0 overrideSegmentSetIDs:(id)a1 additionalSegmentSetIDs:(id)a2 configurationSource:(unsigned long long)a3 debugEnvironment:(unsigned long long)a4 ignoreCache:(BOOL)a5 enableExtraLogs:(BOOL)a6;
- (id)initWithDisableAbTesting:(BOOL)a0 overrideSegmentSetIDs:(id)a1 additionalSegmentSetIDs:(id)a2 onlyUseFallbackURL:(BOOL)a3 debugEnvironment:(unsigned long long)a4;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDisableAbTesting:(BOOL)a0 overrideSegmentSetIDs:(id)a1 additionalSegmentSetIDs:(id)a2 configurationSource:(unsigned long long)a3 debugEnvironment:(unsigned long long)a4 ignoreCache:(BOOL)a5;

@end

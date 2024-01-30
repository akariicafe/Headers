@class NSArray, NSString, NSDictionary;

@interface SASyncGetAnchors : SABaseClientBoundCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *appMetaDataList;
@property (copy, nonatomic) NSString *authToken;
@property (nonatomic) BOOL companionOfMUDevice;
@property (copy, nonatomic) NSDictionary *customVocabSources;
@property (nonatomic) BOOL includeAllKnownAnchors;
@property (copy, nonatomic) NSString *primeToken;
@property (copy, nonatomic) NSArray *sources;
@property (copy, nonatomic) NSString *syncReason;
@property (copy, nonatomic) NSArray *watchAppMetaDataList;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getAnchors;
+ (id)getAnchorsWithDictionary:(id)a0 context:(id)a1;

@end

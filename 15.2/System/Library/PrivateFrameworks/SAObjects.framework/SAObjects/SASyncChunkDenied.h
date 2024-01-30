@class SASyncAnchor, NSString, NSArray;

@interface SASyncChunkDenied : SABaseClientBoundCommand <SAClientBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SASyncAnchor *current;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)chunkDenied;
+ (id)chunkDeniedWithDictionary:(id)a0 context:(id)a1;
+ (id)chunkDeniedWithErrorCode:(long long)a0;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)initWithErrorCode:(long long)a0;
- (BOOL)mutatingCommand;

@end

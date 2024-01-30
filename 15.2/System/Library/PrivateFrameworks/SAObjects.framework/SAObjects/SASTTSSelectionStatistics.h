@class NSString, NSArray;

@interface SASTTSSelectionStatistics : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *completionType;
@property (copy, nonatomic) NSString *interactionId;
@property (copy, nonatomic) NSArray *listenedItems;
@property (nonatomic) long long selectedItemIndex;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSArray *timesListened;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tTSSelectionStatistics;
+ (id)tTSSelectionStatisticsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

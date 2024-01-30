@class NSArray, NSString;

@interface SAUpdateReadingState : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *readingStateId;
@property (nonatomic) long long updatedGroupIndex;
@property (nonatomic) long long updatedItemIndex;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updateReadingState;
+ (id)updateReadingStateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

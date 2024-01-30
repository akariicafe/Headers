@class NSString;

@interface SAHACurrentHome : AceObject <SABackgroundContextObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *currentHomeIdentifier;
@property (copy, nonatomic) NSString *currentHomeName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentHome;
+ (id)currentHomeWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

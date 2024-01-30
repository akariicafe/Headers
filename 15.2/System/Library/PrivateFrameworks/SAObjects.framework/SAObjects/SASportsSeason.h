@class NSNumber, NSString;

@interface SASportsSeason : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *currentSeasonYear;
@property (copy, nonatomic) NSString *relativeSeasonYear;
@property (copy, nonatomic) NSNumber *seasonYear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)season;
+ (id)seasonWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

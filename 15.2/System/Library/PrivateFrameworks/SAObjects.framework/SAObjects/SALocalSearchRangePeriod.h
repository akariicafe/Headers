@class NSString;

@interface SALocalSearchRangePeriod : AceObject <SALocalSearchPeriod>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long endSecondsSinceMidnight;
@property (nonatomic) long long startSecondsSinceMidnight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rangePeriod;
+ (id)rangePeriodWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

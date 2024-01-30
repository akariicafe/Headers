@class NSString, NSDate;

@interface SASportsSeasonRange : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *end;
@property (copy, nonatomic) NSString *seasonType;
@property (copy, nonatomic) NSDate *start;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)seasonRange;
+ (id)seasonRangeWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

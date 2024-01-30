@class NSString;

@interface SAMPAddMediaEntityToAcousticIdHistory : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *adamId;
@property (copy, nonatomic) NSString *affiliateId;

+ (id)addMediaEntityToAcousticIdHistoryWithDictionary:(id)a0 context:(id)a1;
+ (id)addMediaEntityToAcousticIdHistory;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end

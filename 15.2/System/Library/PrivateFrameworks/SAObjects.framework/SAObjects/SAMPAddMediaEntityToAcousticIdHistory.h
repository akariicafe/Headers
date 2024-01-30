@class NSString;

@interface SAMPAddMediaEntityToAcousticIdHistory : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *adamId;
@property (copy, nonatomic) NSString *affiliateId;

+ (id)addMediaEntityToAcousticIdHistory;
+ (id)addMediaEntityToAcousticIdHistoryWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

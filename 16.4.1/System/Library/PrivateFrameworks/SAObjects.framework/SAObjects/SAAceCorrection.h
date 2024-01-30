@class NSData, NSString;

@interface SAAceCorrection : SADomainObject

@property (copy, nonatomic) NSData *correctionEntryData;
@property (copy, nonatomic) NSString *debugString;

+ (id)aceCorrectionWithDictionary:(id)a0 context:(id)a1;
+ (id)aceCorrection;

- (id)groupIdentifier;
- (id)encodedClassName;

@end

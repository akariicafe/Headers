@class NSNumber, NSData;

@interface CKAtomBatchEnumerationOptions : NSObject

@property (nonatomic) NSNumber *atomType;
@property (copy, nonatomic) NSData *siteIdentifierModifier;

+ (id)optionsWithAtomType:(unsigned long long)a0;
+ (id)optionsWithSiteIdentifierModifier:(id)a0;

- (void).cxx_destruct;

@end

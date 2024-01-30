@class NSArray;

@interface WBSPhishingConfigurationDomain : NSObject

@property (readonly, copy, nonatomic) NSArray *expressions;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (BOOL)matchesURL:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithExpressions:(id)a0 error:(id *)a1;

@end

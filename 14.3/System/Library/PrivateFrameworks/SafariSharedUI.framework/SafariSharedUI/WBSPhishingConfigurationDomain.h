@class NSArray;

@interface WBSPhishingConfigurationDomain : NSObject

@property (readonly, copy, nonatomic) NSArray *expressions;

- (void).cxx_destruct;
- (BOOL)matchesURL:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)dictionaryRepresentation;
- (id)initWithExpressions:(id)a0 error:(id *)a1;

@end

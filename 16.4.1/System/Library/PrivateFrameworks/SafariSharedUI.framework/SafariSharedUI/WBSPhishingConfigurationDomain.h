@class NSArray;

@interface WBSPhishingConfigurationDomain : NSObject

@property (readonly, copy, nonatomic) NSArray *expressions;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (BOOL)matchesURL:(id)a0;
- (id)initWithExpressions:(id)a0 error:(id *)a1;

@end

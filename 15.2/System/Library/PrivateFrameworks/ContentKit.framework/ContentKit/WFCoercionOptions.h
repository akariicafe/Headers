@class NSDictionary;

@interface WFCoercionOptions : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *dictionary;

+ (id)new;
+ (id)optionsWithDictionary:(id)a0;
+ (void)registerDefaultDisallowedCoercionPath:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)makeContactAccessResourceAvailableIfNeededWithCompletionHandler:(id /* block */)a0;
- (id)optionsByAddingContentsOfOptions:(id)a0;
- (BOOL)coercionPathIsDisallowed:(id)a0;
- (id)itemClassPrioritizationType;
- (id)preferredTypes;
- (void)makeRemoteServerAccessResourceAvailableIfNeededWithURLs:(id)a0 completionHandler:(id /* block */)a1;

@end

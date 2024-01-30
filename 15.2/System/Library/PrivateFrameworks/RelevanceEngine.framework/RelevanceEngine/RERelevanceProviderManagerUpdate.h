@class RERelevanceProvider;

@interface RERelevanceProviderManagerUpdate : NSObject <NSCopying> {
    RERelevanceProvider *_provider;
}

@property (readonly, nonatomic) RERelevanceProvider *provider;
@property (readonly, nonatomic) BOOL allProviders;
@property (copy, nonatomic) id /* block */ completion;

+ (id)immediateUpdateForProvider:(id)a0;
+ (id)immediateUpdateForAllProviders;
+ (id)scheduledUpdateForProvider:(id)a0 atDate:(id)a1;
+ (id)scheduledUpdateForAllProvidersAtDate:(id)a0;

- (id)initWithProvider:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end

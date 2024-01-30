@class NSSet;
@protocol RERelevanceEnginePreferencesDelegate;

@interface RERelevanceEnginePreferences : NSObject <NSCopying> {
    id<RERelevanceEnginePreferencesDelegate> _delegate;
}

@property (weak, nonatomic) id<RERelevanceEnginePreferencesDelegate> delegate;
@property (copy, nonatomic) NSSet *disabledDataSourceIdentifiers;
@property (nonatomic) unsigned long long mode;

+ (id)defaultPreferences;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end

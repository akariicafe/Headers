@class NSString;

@interface MapsSuggestionsLockscreenImprover : MapsSuggestionsBaseImprover <MapsSuggestionsImprover>

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;

- (BOOL)improveEntry:(id)a0;

@end

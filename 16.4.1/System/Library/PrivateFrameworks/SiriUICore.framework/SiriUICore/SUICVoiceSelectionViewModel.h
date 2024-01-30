@class NSArray;

@interface SUICVoiceSelectionViewModel : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *languages;
@property (readonly, copy, nonatomic) NSArray *voices;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithLanguages:(id)a0 voices:(id)a1;

@end

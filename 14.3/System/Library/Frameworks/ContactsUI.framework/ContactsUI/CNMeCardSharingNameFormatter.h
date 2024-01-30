@class NSPersonNameComponents, NSMutableDictionary;
@protocol CNMeCardSharingNameProvider;

@interface CNMeCardSharingNameFormatter : NSObject

@property (readonly, nonatomic) id<CNMeCardSharingNameProvider> nameProvider;
@property (readonly, nonatomic) NSPersonNameComponents *nameComponents;
@property (retain, nonatomic) NSMutableDictionary *cachedFormattedNames;

+ (id)formattedNameFromComponents:(id)a0 forProvider:(id)a1 withFormat:(unsigned long long)a2;
+ (id)nameComponentsFromProvider:(id)a0;
+ (id)formattedNameFromProvider:(id)a0 withFormat:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithNameProvider:(id)a0;
- (id)formattedNameWithFormat:(unsigned long long)a0;

@end

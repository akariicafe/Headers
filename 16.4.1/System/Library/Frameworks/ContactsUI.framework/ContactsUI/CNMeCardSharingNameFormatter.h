@class NSPersonNameComponents, NSMutableDictionary;
@protocol CNMeCardSharingNameProvider;

@interface CNMeCardSharingNameFormatter : NSObject

@property (readonly, nonatomic) id<CNMeCardSharingNameProvider> nameProvider;
@property (readonly, nonatomic) NSPersonNameComponents *nameComponents;
@property (retain, nonatomic) NSMutableDictionary *cachedFormattedNames;

+ (id)formattedNameFromComponents:(id)a0 forProvider:(id)a1 withFormat:(unsigned long long)a2;
+ (id)formattedNameFromProvider:(id)a0 withFormat:(unsigned long long)a1;
+ (id)nameComponentsFromProvider:(id)a0;

- (void).cxx_destruct;
- (id)formattedNameWithFormat:(unsigned long long)a0;
- (id)initWithNameProvider:(id)a0;

@end

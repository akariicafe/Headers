@class NSString;

@interface CNContactRelationLocalizationProvider : NSObject <CNContactRelationLocalizationProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preferredLanguages;
+ (id)supplementalLabelURLPairsForLanguages:(id)a0;


@end

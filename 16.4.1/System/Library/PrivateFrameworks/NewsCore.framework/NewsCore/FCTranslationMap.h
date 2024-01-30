@class NSString, NSDictionary;

@interface FCTranslationMap : NSObject <FCTranslationProvider>

@property (retain, nonatomic) NSString *resourceID;
@property (retain, nonatomic) NSDictionary *topicTranslationMap;
@property (retain, nonatomic) NSDictionary *favoriteTranslationMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

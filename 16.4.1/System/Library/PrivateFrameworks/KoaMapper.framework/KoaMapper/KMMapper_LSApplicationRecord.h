@class NSString, KVItemBuilder, NSNumber;

@interface KMMapper_LSApplicationRecord : NSObject <KMMapper> {
    KVItemBuilder *_builder;
    NSNumber *_languageCodeKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)externalObjectClass;

@end

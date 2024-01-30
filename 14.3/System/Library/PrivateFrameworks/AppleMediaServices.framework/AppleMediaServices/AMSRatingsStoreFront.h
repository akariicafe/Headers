@class NSString, NSArray;

@interface AMSRatingsStoreFront : NSObject

@property (readonly, nonatomic) NSString *defaultLanguage;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *ratingSystems;
@property (readonly, nonatomic) NSString *storeFront;
@property (readonly, nonatomic) NSString *storeFrontID;
@property (readonly, nonatomic) NSArray *supportedLanguages;

+ (id)storeFrontWithDictionary:(id)a0 mediaType:(unsigned long long)a1 andStoreFront:(id)a2;
+ (id)storeFrontWithDictionary:(id)a0 mediaType:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0 mediaType:(unsigned long long)a1;
- (id)initWithDictionary:(id)a0 mediaType:(unsigned long long)a1 andStoreFront:(id)a2;

@end

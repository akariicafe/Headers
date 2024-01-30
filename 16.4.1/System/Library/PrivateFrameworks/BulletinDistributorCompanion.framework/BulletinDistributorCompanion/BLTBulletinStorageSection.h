@class NSMutableArray, NSMutableDictionary;

@interface BLTBulletinStorageSection : NSObject

@property (readonly, nonatomic) unsigned long long totalContextSize;
@property (readonly, nonatomic) unsigned long long maxContextSize;
@property (readonly, nonatomic) NSMutableArray *bulletins;
@property (readonly, nonatomic) NSMutableDictionary *bulletinIDToBulletin;

- (void).cxx_destruct;
- (void)removeBulletin:(id)a0;
- (id)addOrReplaceBulletin:(id)a0;
- (id)initWithMaxContextSize:(unsigned long long)a0;

@end

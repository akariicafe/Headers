@class NSArray, NSMutableDictionary;

@interface REMAuxiliaryChangeInfoFetchResult : NSObject

@property (nonatomic) Class typedKlass;
@property (retain, nonatomic) NSMutableDictionary *changeObjectForAuxiliaryChangeInfoMap;
@property (readonly, nonatomic) NSArray *auxiliaryChangeInfos;

+ (id)auxiliaryChangeInfoFetchResultOfType:(Class)a0;

- (void).cxx_destruct;
- (id)auxiliaryChangeInfoFromData:(id)a0 withObjectID:(id)a1 fromChangeObject:(id)a2 error:(id *)a3;
- (id)changeObjectForAuxiliaryChangeInfo:(id)a0;
- (id)initWithAuxiliaryChangeInfoType:(Class)a0;
- (void)setAuxiliaryChangeInfos:(id)a0;

@end

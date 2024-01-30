@class NSArray, NSMutableDictionary;

@interface REMAuxiliaryChangeInfoFetchResult : NSObject

@property (retain, nonatomic) NSArray *auxiliaryChangeInfos;
@property (nonatomic) Class typedKlass;
@property (retain, nonatomic) NSMutableDictionary *changeObjectForAuxiliaryChangeInfoMap;

+ (id)auxiliaryChangeInfoFetchResultOfType:(Class)a0;

- (void).cxx_destruct;
- (id)initWithAuxiliaryChangeInfoType:(Class)a0;
- (id)changeObjectForAuxiliaryChangeInfo:(id)a0;
- (void)setAuxiliaryChangeInfos:(id)a0;
- (id)auxiliaryChangeInfoFromData:(id)a0 withObjectID:(id)a1 fromChangeObject:(id)a2 error:(id *)a3;

@end

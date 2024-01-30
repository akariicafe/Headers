@class NSMutableArray;

@interface TRINamespaceInfos : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *namespaceInfoArray;
@property (readonly, nonatomic) unsigned long long namespaceInfoArray_Count;

+ (id)descriptor;

@end

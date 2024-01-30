@class NSMutableArray;

@interface TRINamespaces : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *namespaceIdArray;
@property (readonly, nonatomic) unsigned long long namespaceIdArray_Count;

+ (id)descriptor;

@end

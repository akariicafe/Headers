@class NSMutableArray;

@interface TRIProjectOwners : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *projectOwnerArray;
@property (readonly, nonatomic) unsigned long long projectOwnerArray_Count;

+ (id)descriptor;

@end

@class NSString, NSMutableArray, TRIPBSourceContext;

@interface TRIPBType : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *fieldsArray;
@property (readonly, nonatomic) unsigned long long fieldsArray_Count;
@property (retain, nonatomic) NSMutableArray *oneofsArray;
@property (readonly, nonatomic) unsigned long long oneofsArray_Count;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) unsigned long long optionsArray_Count;
@property (retain, nonatomic) TRIPBSourceContext *sourceContext;
@property (nonatomic) BOOL hasSourceContext;
@property (nonatomic) int syntax;

+ (id)descriptor;

@end

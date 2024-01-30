@class NSString, NSMutableArray, GPBSourceContext;

@interface GPBType : GPBMessage

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *fieldsArray;
@property (readonly, nonatomic) unsigned long long fieldsArray_Count;
@property (retain, nonatomic) NSMutableArray *oneofsArray;
@property (readonly, nonatomic) unsigned long long oneofsArray_Count;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) unsigned long long optionsArray_Count;
@property (retain, nonatomic) GPBSourceContext *sourceContext;
@property (nonatomic) BOOL hasSourceContext;
@property (nonatomic) int syntax;

+ (id)descriptor;

@end
